// Left Rotate anti-clock wise one element.

#include<iostream>
using namespace std;

void leftRotateOne(int arr[], int n)
{
    int temp = arr[0];              // Use temp variable to store
    for (int i = 1; i < n; i++)     // Move every element one index back
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;                // Replace last element with first element.
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%s\n", "Before Rotation:");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    cout << endl;

    leftRotateOne(arr, n);

    printf("%s\n", "After Rotation:");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    cout << endl;
    return 0;
}



// OUTPUT:
//     Before Rotation:
//     1 2 3 4 5
//     After Rotation:
//     2 3 4 5 1