#include <bits/stdc++.h>
using namespace std;

// Refer to NOTE** for (int n) passing logic
void printArray(int arr[], int n)
{
    cout << "printing the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing DONE" << endl;
}

// Make a function only for an array of size 15 ---- bad practice
// void printArray(int arr[15], int n)
// {
//     cout << "printing the array" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "printing DONE" << endl;
// }

int main()
{
    // declare
    int number[15];

    // Accesing an array ---- Garbage value
    cout << "Value at index 0 is :" << number[0] << endl;
    cout << "Value at index 1 is :" << number[1] << endl;
    cout << "Value at 15th location is :" << number[14] << endl;
    // Access an index that is out of range
    cout << "Value at 20th location is :" << number[20] << endl;

    // Initialize an array
    int second[3] = {5, 7, 11};

    // Access an array
    cout << "Value at index 2 is :" << second[2] << endl;

    int third[15] = {2, 7};

    // NOTE** ---- Length of the array can found out by sizeof method, but the actual size (which is 2 in third case) of array cannot be found out. That's why we pass size of the array to the function.

    // print the array
    printArray(third, 15);

    // initialize an entire array with 0
    int fourth[10] = {0};
    printArray(fourth, 10);

    // initialize an entire array with 1 ---- not possible with above approach
    int fifth[10] = {1};
    printArray(fifth, 10);

    // Finding Size
    // int fifthSize = sizeof(fifth) / sizeof(fifth[0]); OR int fifthSize = sizeof(fifth) / sizeof(int);
    // cout << "Size of fifth is :" << fifthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout << ch[3] << endl;
    // printArray(ch, 5); ---- doesn't work as we have defined the function for int array only.
    cout << "printing the array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << "printing DONE" << endl;

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    cout << "Everything is fine " << endl;

    return 0;
}