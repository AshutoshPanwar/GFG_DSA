// Prefix Sum.

#include<iostream>
using namespace std;

int Naive_getSum(int arr[], int start, int end)
{
    int res = 0;
    for (int i = start; i <= end; i++)
    {
        res += arr[i];
    }
    return res;
}

int getSum(int ps[], int start, int stop)
{
    if(stop == 0)
        return ps[stop];
    return ps[stop] - ps[start - 1];
}

int main()
{
    int arr[]={2, 8, 3, 9, 6, 5};
    // Efficient Approch
    int n = 7;
    int ps[n];
    ps[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i-1] + arr[i];
    }
    cout << getSum(ps,1,3) << endl;
    // cout << getSum(arr,1,3) << endl;
    return 0;
}


// OUTPUT:
//     20