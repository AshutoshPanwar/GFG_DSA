// Left Rotate Array D time's Counter-Clock-Wise.

#include<iostream>
using namespace std;

// Naive Approch
void leftRotateOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
void Naive_leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
    {
        leftRotateOne(arr, n);
    }
}


// Efficient Approch
void Effective_leftRotate(int arr[], int d, int n)
{
    int temp[d];        // Creating a temp array of size d.
    for (int i = 0; i < d; i++)         // Copying first D element's to temp array.
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)         // Moving d to n element's to starting.
    {
        arr[i-d] = arr[i];
    }
    for (int i = 0; i < n; i++)         // Copy all the d element's from temp to original array.
    {
        arr[n-d+i] = temp[i];
    }
}


// Reversal Approch
void reversal(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void leftRotate(int arr[], int d, int n)
{
    reversal(arr, 0, d-1);          // Reverse first d element's.
    reversal(arr, d, n-1);          // Reverse d to n-1 element's.
    reversal(arr, 0, n-1);          // Reverse complete array.
}



int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5, d = 2;

    cout<<"Before Rotation"<<endl;

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    leftRotate(arr, d, n);

    cout<<"After Rotation"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
    return 0;
}


// OUTPUT:
//     Before Rotation
//     1 2 3 4 5
//     After Rotation
//     3 4 5 1 2