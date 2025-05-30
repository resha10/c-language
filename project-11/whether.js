let apiKey = '125eea1445b638160570a4c8067699de';
let url = 'https://api.openweathermap.org/data/2.5/weather?units=metric&appid=' + apiKey;

document.querySelector("button").addEventListener("click", (e) => {
    e.preventDefault();  
    let valueSearch = document.getElementById('name');
    let cityName = document.querySelector('.city-name');
    let countryFlag = document.querySelector('.name img');
    let temperatureImg = document.querySelector('.temperature img');
    let temperatureValue = document.querySelector('.temperature span');
    let description = document.querySelector('.description');
    let clouds = document.getElementById('clouds');
    let humidity = document.getElementById('humidity');
    let pressure = document.getElementById('pressure');
    let resultSection = document.querySelector('.result');
    let mainElement = document.querySelector("main"); 

    if (valueSearch.value.trim() === '') return;

    resultSection.classList.add('fade-out');

    fetch(url + '&q=' + valueSearch.value)
        .then(res => res.json())
        .then(data => {
            if (data.cod == 200) {
                setTimeout(() => {

                    cityName.innerText = data.name;
                    //countryFlag.src = `https://flagsapi.com/${data.sys.country}/shiny/32.png`;
                    temperatureImg.src = `https://openweathermap.org/img/wn/${data.weather[0].icon}@4x.png`;
                    temperatureValue.innerText = data.main.temp + "°C";
                    description.innerText = data.weather[0].description;
                    clouds.innerText = data.clouds.all + "%";
                    humidity.innerText = data.main.humidity + "%";
                    pressure.innerText = data.main.pressure + " hPa";


                    resultSection.classList.remove('fade-out');
                    resultSection.classList.add('fade-in');
                }, 500);

                setTimeout(() => {
                    resultSection.classList.remove('fade-in');
                }, 1000);
            } else {
                mainElement.classList.add("error");
                setTimeout(() => {
                    mainElement.classList.remove("error"); 
                }, 300);    
            }
        })
        .catch(err => {
            console.log(err);
            mainElement.classList.add("error");
            setTimeout(() => {
                mainElement.classList.remove("error");
            }, 300);
        });

    valueSearch.value = "";
});