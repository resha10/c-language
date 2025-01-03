#include<iostream>

using namespace std;

main() 
{

    int a[10][15];
    int i, j;
    int r, c;
    int n;

    cout << "enter array's row size : ";
    cin >> r;

    cout << "enter array's column size: ";
    cin >> c;

    cout << "\n enter array element:\n";
    
    for(i = 0 ; i < r; i++) 
    {
        for(j = 0 ; j < c; j++) 
        {
            cout << "enter value of a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    
    n = a[0][0];

    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            if(n < a[i][j]) 
            {
                n = a[i][j];
            }
        }
    }

    cout << "\n the largest element is : " << n << endl;
}