// Find largest element in array

#include<iostream>
using namespace std;

int getLargest(int arr[], int n)
{
    int max = 0;                // Consider element at index 0 as the greatest
    for (int i = 1; i < n; i++)     // Compare Every other element
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
    }
    return arr[max];
}

int main()
{
    int arr[] = {5, 8, 20, 15};
    cout << getLargest(arr, 4) << endl;
    return 0;
}


// OUTPUT:
//     20