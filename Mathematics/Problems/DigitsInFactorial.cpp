//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int digitsInFactorial(int N)
    {
        // code here
        // ***** Factorila of a number *****
        long long int fact=1;
        for(int i=2; i <= N; i++){
            fact = fact * i;
        }
        // ***** Counting number of digits *****
        int count = 0;
        while(fact != 0) {
            fact = fact / 10;
            count++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends