// Searching item in an Array.
// Using linear approch by comparing one by one element to the search value.


#include<iostream>
using namespace std;

int Search(int arr[], int n, int x){        // 3 Parameter's as [Array, Size of Arrya, Item to be searched]
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;          // Execute if Not-Found.
}

int main()
{
    int arr[] = {20, 5, 7, 25};
    int x = 5;
    cout << Search(arr, 4, x) << endl;
    return 0;
}

// OUTPUT:
//     1