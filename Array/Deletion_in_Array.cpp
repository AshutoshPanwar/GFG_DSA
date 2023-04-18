// Deletion in Array
// First we perform Searching.

#include<iostream>
using namespace std;

int deletion(int arr[], int size, int x)
{
    // Searching in Array
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    if (i == size)
    {
        return size;        // If No not found in array
    }
    // Deletion Operation
    for (int j = i; j < size - 1; j++)
    {
        arr[j] = arr[j+1];
    }
    return size-1;
}

int main()
{
    int arr[] = {3, 8, 12, 5, 6}, n = 5, x = 12;
    cout << "Before Deletion" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    n = deletion(arr, n, x);
    cout << "After Deletion" << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}



// OUTPUT:
//     Before Deletion
//     3 8 12 5 6 
//     After Deletion
//     3 8 5 6 