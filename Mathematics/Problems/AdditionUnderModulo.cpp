//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        // code here
        long mode = 1000000007;
        return (a%mode + b%mode)%mode;
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--)
	{
    long long a;
    long long b;
    cin>>a>>b;
    Solution ob;
    cout<<ob.sumUnderModulo(a,b)<<endl;
	}
	return 0;
}
// } Driver Code Ends