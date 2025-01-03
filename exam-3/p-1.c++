#include<iostream>

using namespace std;

main()
{

    int a[200];
    int i, size;

    cout << "enter array's size :";
    cin >> size;

    cout << "\n Enter array's elements:\n";

        for(i = 0; i < size; i++) 
    {
        cout << "Enter value a[" << i << "] = ";
        cin >> a[i];
    }

        cout << "\n Negative elements from an Array: ";
    
        for(i = 0; i < size; i++) 
    {
        if(a[i] < 0) 
        {
            cout << a[i] << " ";
        }
    }
}