// Subset Sum Problem (Any Subset of a given set contain sum as given sum value)

#include<iostream>
using namespace std;

int isSubsetSum(int arr[], int n, int sum){
    if(n==0){
        return (sum == 0) ? 1:0;
    }
    return isSubsetSum(arr, n-1, sum) + isSubsetSum(arr, n-1, sum-arr[n-1]);
}

int main()
{
    int set[] = {10, 20, 15 };
    int sum = 25;
    int n = sizeof(set) / sizeof(set[0]);
    if (isSubsetSum(set, n, sum) == true)
        cout <<"Found a subset with given sum";
    else
        cout <<"No subset with given sum";
    return 0;
}