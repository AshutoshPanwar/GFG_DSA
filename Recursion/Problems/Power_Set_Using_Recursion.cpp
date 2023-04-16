//{ Driver Code Starts
//Initial Template for C++


// CPP program to generate power set
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


//Function to return the lexicographically sorted power-set of the string.
void helpset(string str, vector<string>&v, int index=0, string curr = "")
{
    int n = str.length();
    if(n==index){
        v.push_back(curr);
        return;
    }
    helpset(str, v, index+1, curr);
    helpset(str, v, index+1, curr+str[index]);
}
vector <string> powerSet(string s)
{
   //Your code here
   vector<string>ans;
   helpset(s,ans);
   return ans;
}


//{ Driver Code Starts.


// Driver code
int main()
{
    int T;
    cin>>T;//testcases
    while(T--)
    {
        string s;
        cin>>s;//input string
        
        //calling powerSet() function
        vector<string> ans = powerSet(s);
        
        //sorting the result of the powerSet() function
        sort(ans.begin(),ans.end());
        
        //printing the result
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
        
        
    }

return 0;
} 
// } Driver Code Ends