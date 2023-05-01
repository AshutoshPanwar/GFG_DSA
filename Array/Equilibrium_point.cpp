// Equilibrium Point.

#include<iostream>
using namespace std;

int Naive_equilibrium(int arr[], int n)
{
    int lsum, rsum;
    for (int i = 0; i < n; i++)
    {
        lsum = 0;
        for (int j = 0; j < i; j++)
        {
            lsum += arr[j];
        }
        rsum = 0;
        for (int j = i+1; j < n; j++)
        {
            rsum += arr[j];
        }
        if (lsum == rsum)
        {
            return i;
        }
    }
    return -1;
}

int equilibrium(int arr[], int n)
{
    int tsum = 0;
    int lsum = 0;

    for (int i = 0; i < n; i++)
    {
        tsum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        tsum -= arr[i];
        if (lsum == tsum)
        {
            return i;
        }
        lsum += arr[i];
    }
    return -1;
}

int main()
{
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    cout << equilibrium(arr, arr_size) << endl;
    return 0;
}

// OUTPUT:
//     3