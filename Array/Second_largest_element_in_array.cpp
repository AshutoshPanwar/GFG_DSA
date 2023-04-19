// Second Largest element in Array

#include<iostream>
using namespace std;

int secondLargest(int arr[], int n)
{
    int largest = 0, secondLargest = -1;

    for (int i = 0; i < n; i++)         // Finding Largest in Array
    {
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }

    for (int i = 0; i < n; i++)         // Finding the second largest Array
    {
        if (arr[i] != arr[largest])
        {
            if (secondLargest == -1)
            {
                secondLargest = i;
            }
            else if (arr[i] > arr[secondLargest])
            {
                secondLargest = i;
            }
        }
    }
    return secondLargest;
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int second_Largest = secondLargest(arr, n);
    if (second_Largest == -1)
    {
        cout << "No Second Largest No in the Array." << endl;
    }
    else
    {
        cout << "Second largest No is: " << arr[second_Largest] << endl;
    }
    return 0;
}


// OUTPUT:
//     Second largest No is: 34