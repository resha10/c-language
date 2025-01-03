#include<iostream>
using namespace std;

int main() 
{
    int i, j, n;
    int a[10][10];
    int transpose;

    cout << "ENTER ARRAY'S ROW & COLUMN SIZE: ";
    cin >> n;

    cout << "\nENTER ARRAY'S ELEMENTS:\n";
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            cout << "ENTER VALUE a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    for(i = 0; i < n; i++) 
    {
        for(j = i + 1; j < n; j++) 
        {
            transpose = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = transpose;
        }
    }

    cout << "\n================================\n";

    cout << "THE TRANSPOSE MATRIX OF AN ARRAY:\n";
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}