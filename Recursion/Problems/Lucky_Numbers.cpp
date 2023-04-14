//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User-function template for C++

// Complete the function
// n: Input n
// Return True if the given number is a lucky number else return False
class Solution{
public:
    bool isLucky(int n) {
        // code here
        static int counter = 2;
        // Base condition
        if(n % counter == 0){
            counter = 2;
            return false;
        }
        if(counter > n){
            counter = 2;
            return true;
        }
        
        // Recursive call
        n = n - (n/counter);
        counter++;
        return isLucky(n);
        
    }
};

//{ Driver Code Starts.
signed main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        Solution obj;
        //calling isLucky() function
        if(obj.isLucky(n))
            cout<<"1\n";//printing "1" if isLucky() returns true
        else
            cout<<"0\n";//printing "0" if isLucky() returns false
    }
    
}
// } Driver Code Ends