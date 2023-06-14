//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
        int low = 0, high = N-1;

        while(low <= high){
            int mid = (low + high) / 2;
    
            if(arr[mid] == 0){
                high = mid - 1;
            }else{
                if(mid == N-1 || arr[mid+1] == 0){
                    return mid+1;
                }else{
                    low = mid + 1;
                }
            }
        }
        return 0;
        // Time Complexity: O(LogN)
        // Auxiliary Space: O(1)
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
            
        Solution ob;
        cout <<ob.countOnes(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends