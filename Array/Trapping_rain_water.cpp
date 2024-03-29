// Trapping rain water problem.

#include<iostream>
using namespace std;

int Naive_getWater(int arr[], int n)
{
    int res = 0;

    for (int i = 1; i < n-1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax, arr[j]);
        }

        int rmax = arr[i];
        for (int j = i+1; j < n; j++)
        {
            rmax = max(rmax, arr[j]);
        }

        res = res + (min(lmax, rmax) - arr[i]);
    }

    return res;
}


int getWater(int arr[], int n)
{
    int res = 0;

    for (int i = 1; i < n-1; i++)
    {
        int res = 0;
        int lmax[n];
        int rmax[n];

        lmax[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            lmax[i] = max(arr[i], lmax[i-1]);
        }

        rmax[n-1] = arr[n-1];
        for (int i = n-2; i >= 0; i--)
        {
            rmax[i] = max(arr[i], rmax[i+1]);
        }

        for (int i = 1; i < n-1; i++)
        {
            res = res + min(lmax[i], rmax[i]) - arr[i];
        }
        return res;
    }
    return res;
}

int main()
{
    int arr[] = {3, 0, 1, 2, 5}, n = 5;

    cout << getWater(arr, n) << endl;
    return 0;
}



// OUTPUT:
//     6