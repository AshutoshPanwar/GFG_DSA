// Insertion in array

#include<iostream>
using namespace std;

int insert(int arr[], int size, int x, int capacity, int position)
{
    if(size == capacity)        // No place to add new element.
        return size;

    int idx = position - 1;

    for(int i = size - 1; i >= idx; i--)        // Move every element to next index.
    {
        arr[i+1] = arr[i];
    }
    arr[idx] = x;               // Place the element at right index.

    return size + 1;
}

int main()
{
    int arr[5] = {5, 10, 20}, cap = 5, n = 3;

    cout << "Befor Insertion" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int x = 7, pos = 2;

    n = insert(arr, n, x, cap, pos);
    cout << "After Insertion" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



// OUTPUT:
//     Befor Insertion
//     5 10 20
//     After Insertion
//     5 7 10 20