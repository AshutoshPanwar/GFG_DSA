// Remove Duplicate itme's from the Sorted Array.

#include<iostream>
using namespace std;

int Naive_remDups(int arr[], int n)     // In this we use temp array to store result.
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        if (temp[res-1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < n; i++)     // Copying all the temp elements to the original array.
    {
        arr[i] = temp[i];
    }
    return res;
}


int remDups(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res-1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int arr[] = {10, 20, 20, 30, 30, 30}, n = 6;
    cout << "Before Removal" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    n = remDups(arr, n);
    cout << "After Removal" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


// OUTPUT:
//     Before Removal
//     10 20 20 30 30 30
//     After Removal
//     10 20 30