// Frequency of a element in a sorted array.

#include<iostream>
using namespace std;

void printFreq(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i-1] == arr[i])
        {
            freq++;
            i++;
        }
        cout << arr[i-1] << " " << freq << endl;
        freq = 1;
        i++;
    }
    if (n == 1 || arr[n-1] != arr[n-2])
    {
        cout << arr[n-1] << " " << " 1" << endl;
    }
}

int main()
{
    int arr[] = {10, 10, 20, 30, 30, 30}, n = 6;

    printFreq(arr, n);
    return 0;
}


// OUTPUT:
//     10 2
//     20 1
//     30 3