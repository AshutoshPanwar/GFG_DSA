//{ Driver Code Starts
//Initial Template for C++



#include <iostream>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    // Complete this function
    int sumOfDigits(int n)
    {
        //Your code here
        if(n <= 9)      // Base Conditoin & Skipping 1 last recursive call.
            return n;
        
        return (n % 10) + sumOfDigits(n / 10);  // Recursive call
    }
};

//{ Driver Code Starts.


int main() {
	int T;
	
	//taking testcases
	cin>>T;
	while(T--)
	{
	    int n;
	    
	    //taking input n
	    cin>>n;
	    
	    //calling method sumOfDigits()
	    Solution obj;
	    cout<<obj.sumOfDigits(n)<<endl;
	    
	    
	}
	return 0;
}
// } Driver Code Ends