#include<bits/stdc++.h>
using namespace std;

// Count 1s in a Sorted Binary Array.

int countOnes(int arr[], int n){
    int low = 0, high = n-1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == 0){
            low = mid + 1;
        }else{
            if(mid == 0 || arr[mid - 1] != arr[mid]){
                return (n - mid);
            }else{
                high = mid - 1;
            }
        }
    }
    return 0;
    // Time complexity: O(Log(N))
    // Auxiliary Space: O(1)
}

int main()
{
    int arr[] = {0, 0, 1, 1, 1, 1}, n = 6;
    cout << countOnes(arr, n) << endl;
    return 0;
}

// OUTPUT:
//     4