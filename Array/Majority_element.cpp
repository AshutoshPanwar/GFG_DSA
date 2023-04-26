// Majority element problem.

#include<iostream>
using namespace std;

int Naive_findMajority(int arr[], int n)        // Time Complexity: O(n^2)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > n/2)
        {
            return i;
        }
    }
    return -1;
}


int findMajority(int arr[], int n)              // Time Complexity: O(n)
{
    int res = 0, count = 1;
    for (int i = 1; i < n; i++)     // Find a candidate
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else{
            count--;
        }

        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)     // Check is candidate is majority or not.
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
    }
    if (count <= n/2)
    {
        return -1;
    }
    return res;
}

int main()
{
    int arr[] = {8, 7, 6, 8, 6, 6, 6, 6}, n = 8;

    cout << findMajority(arr, n) << endl;
    return 0;
}


// OUTPUT:
//     4