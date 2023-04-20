// Move all the Zero elements in array to last of all non-zero element.

#include<iostream>
using namespace std;


void Naive_pushZerosToEnd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i+1; j < n; j++)
            {
                if(arr[j] != 0)
                    swap(arr[i], arr[j]);
            }
        }
    }
}

void pushZerosToEnd(int arr[], int n)
{
    int count = 0;                   // Count of Non Zero element's to know index of first 0 element.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}



int main()
{
    int arr[] = {1,9,8,4,0,0,2,7,0,6,0,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%s\n", "Array Before pushing all zeros to end of array:");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    cout << endl;

    pushZerosToEnd(arr, n);

    printf("%s\n", "Array after pushing all zeros to end of array:");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    cout << endl;
    return 0;
}


// OUTPUT:
//     Array Before pushing all zeros to end of array:
//     1 9 8 4 0 0 2 7 0 6 0 9
//     Array after pushing all zeros to end of array:
//     1 9 8 4 2 7 6 9 0 0 0 0
