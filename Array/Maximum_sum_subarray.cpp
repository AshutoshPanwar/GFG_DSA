// Maximum subarray sum problem.

#include<iostream>
using namespace std;

int Naive_maxSum(int arr[], int n)      // Time Complexity: O(n^2)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr = curr + arr[j];
            res = max(res, curr);
        }
    }
    return res;
}

int maxSum(int arr[], int n)            // Time Complexity: o(n)
{
    int maxEnding = arr[0];
    int res = arr[0];

    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int main()
{
    int arr[]={-3,8,-2,4,-5,6};
	int n=6;
	int res = maxSum(arr,n);
	cout << res << "\n";
    return 0;
}


// OUTPUT:
//     11