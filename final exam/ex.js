let recipes = JSON.parse(localStorage.getItem('recipes')) || [];

const form = document.getElementById('recipeForm');
const list = document.getElementById('recipeList');
const search = document.getElementById('search');
const filterCuisine = document.getElementById('filterCuisine');

form.addEventListener('submit', addRecipe);
search.addEventListener('input', displayRecipes);
filterCuisine.addEventListener('change', displayRecipes);

function addRecipe(e) {
  e.preventDefault();
  const title = document.getElementById('title').value.trim();
  const ingredients = document.getElementById('ingredients').value.trim();
  const instructions = document.getElementById('instructions').value.trim();
  const cuisine = document.getElementById('cuisine').value.trim();

  if (!title || !ingredients) {
    alert("Title and ingredients are required!");
    return;
  }

  const recipe = {
    id: Date.now(),
    title,
    ingredients,
    instructions,
    cuisine
  };

  recipes.push(recipe);
  saveRecipes();
  displayRecipes();
  form.reset();
}

function displayRecipes() {
  const query = search.value.toLowerCase();
  const cuisineFilter = filterCuisine.value;

  list.innerHTML = '';

  const filtered = recipes.filter(r => {
    const matchesSearch =
      r.title.toLowerCase().includes(query) || r.ingredients.toLowerCase().includes(query);
    const matchesCuisine = !cuisineFilter || r.cuisine.toLowerCase() === cuisineFilter.toLowerCase();
    return matchesSearch && matchesCuisine;
  });

  if (filtered.length === 0) {
    list.innerHTML = '<p>No recipes found.</p>';
  }

  filtered.forEach(r => {
    const card = document.createElement('div');
    card.className = 'recipe-card';
    card.innerHTML = `
      <h3>${r.title}</h3>
      <p><strong>Ingredients:</strong> ${r.ingredients}</p>
      <p><strong>Instructions:</strong> ${r.instructions || 'N/A'}</p>
      <p><strong>Cuisine:</strong> ${r.cuisine || 'N/A'}</p>
      <button onclick="editRecipe(${r.id})">Edit</button>
      <button onclick="deleteRecipe(${r.id})">Delete</button>
    `;
    list.appendChild(card);
  });

  updateCuisineFilter();
}

function editRecipe(id) {
  const r = recipes.find(recipe => recipe.id === id);
  if (!r) return;

  document.getElementById('title').value = r.title;
  document.getElementById('ingredients').value = r.ingredients;
  document.getElementById('instructions').value = r.instructions;
  document.getElementById('cuisine').value = r.cuisine;

  deleteRecipe(id); // remove and re-add on submit
}

function deleteRecipe(id) {
  recipes = recipes.filter(r => r.id !== id);
  saveRecipes();
  displayRecipes();
}

function updateCuisineFilter() {
  const cuisines = [...new Set(recipes.map(r => r.cuisine).filter(Boolean))];
  filterCuisine.innerHTML = '<option value="">All Cuisines</option>';
  cuisines.forEach(c => {
    const opt = document.createElement('option');
    opt.value = c;
    opt.textContent = c;
    filterCuisine.appendChild(opt);
  });
}

function saveRecipes() {
  localStorage.setItem('recipes', JSON.stringify(recipes));
}

displayRecipes();