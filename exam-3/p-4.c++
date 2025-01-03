#include<iostream>
 
using namespace std;

int main() 
{
    int row, col;

    cout << "ENTER THE ROW: ";
    cin >> row;
    cout << "ENTER THE COLUMN: ";
    cin >> col;

    int a[row][col]; 
    int i, j;

    cout << "\n\n";
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cout << "ENTER a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
        cout << "\n";
    }

    int r, r_sum = 0;
    cout << "\n\nENTER ROW NUMBER: ";
    cin >> r;

    for(j = 0; j < col; j++) 
    {
        cout << a[r][j] << " ";
        r_sum += a[r][j];
    }
    cout << "\nTHE SUM OF ROW " << r << ": " << r_sum << endl;

    
    int c, c_sum = 0;
    cout << "\n\nENTER COLUMN NUMBER: ";
    cin >> c;

    for(i = 0; i < row; i++) 
    {
        cout << a[i][c] << " ";
        c_sum += a[i][c];
    }
    cout << "\nTHE SUM OF COLUMN " << c << ": " << c_sum << endl;

}