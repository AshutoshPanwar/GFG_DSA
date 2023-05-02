// Check if Array is sorted or Not.

#include<iostream>
using namespace std;

bool NaiveisSorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                return false;
            }
        }
    }
    return true;
}

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i-1] > arr[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1, 11, 111, 1111}, n = 4;
    printf("%s", NaiveisSorted(arr, n)? "true": "false");
    return 0;
}


// OUTPUT:
//     true