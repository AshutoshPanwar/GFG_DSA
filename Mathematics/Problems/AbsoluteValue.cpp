#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
        int absolute(int I) {
        // Your code goes here
        if (I > 0)
            return I;
        else
            // return abs(I);
            return I * (-1);
    }

};

//{ Driver Code Starts.
int main() {
    int T;    // number of testcases
    cin >> T; // input number of testcases
    while (T--) {
        int I;
        cin >> I;
        Solution ob;
        cout << ob.absolute(I) << endl; // print the output
    }
    return 0;
}
