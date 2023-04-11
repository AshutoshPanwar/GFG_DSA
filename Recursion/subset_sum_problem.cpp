// Subset Sum Problem (Any Subset of a given set contain sum as given sum value)
// For a given set ther are 2^n subset's.
// In this we are focusing on sum variable in recursion tree if(0) then possible else not.

#include<iostream>
using namespace std;

int isSubsetSum(int ARR[], int N, int SUM){
    if(N == 0){                                 // Base condition
        return (SUM == 0) ? 1 : 0;
    }

    return isSubsetSum(ARR, N-1, SUM) + isSubsetSum(ARR, N-1, SUM-ARR[N-1]);        // Recursive call
}

int main()
{
    int set[] = {10, 20, 15 };
    int sum = 25;
    int n = sizeof(set) / sizeof(set[0]);

    if (isSubsetSum(set, n, sum) == true)
        cout <<"Found a subset with given sum" << endl;
    else
        cout <<"No subset with given sum" << endl;

    return 0;
}

// OUTPUT:
//       Found a subset with given sum
