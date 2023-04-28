// Sliding Window Problem.

#include<iostream>
using namespace std;

int Naive_maxSum(int arr[], int n, int k)
{
    int res = INT_MIN;
    for (int i = 0; i+k-1 < n; i++)
    {
        int curr = 0;
        for (int j = 0; j < k; j++)
        {
            curr += arr[i+j];
        }
        res = max(res, curr);
    }
    return res;
}

int maxSum(int arr[], int n, int k)
{
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        res += arr[i];
    }

    int curr = res;

    for (int i = k; i < n; i++)
    {
        res += (arr[i] - arr[i-k]);
        curr = max(res, curr);
    }
    return curr;
}

int main()
{
    int arr[] = {1, 8, 30, -5, 20, 7}, n = 6, k = 3;
    cout << maxSum(arr, n, k) << endl;
    return 0;
}


// OUTPUT:
//     45