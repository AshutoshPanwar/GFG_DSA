//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long gcd(long long a, long long b){
        if(b == 0)
            return a;
        else
            return gcd(b, a%b);
    }
    long long numGame(long long n) {
        // code here
        if(n==1)
            return 1;
        
        long long ans = 1;
        
        for(long long i = 2; i <= n; i++){
            long long hcf = gcd(i, ans);
            ans = (ans*i/hcf)%1000000007;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        
        cin>>n;

        Solution ob;
        cout << ob.numGame(n) << endl;
    }
    return 0;
}
// } Driver Code Ends