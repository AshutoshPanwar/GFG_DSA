// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    vector<int> quadraticRoots(int a, int b, int c) {
        double discriminant = b*b - 4*a*c;
        if(discriminant >= 0){
            double x1 = (-b + sqrt(discriminant)) / (2.0*a);
            double x2 = (-b - sqrt(discriminant)) / (2.0*a);
            return {floor(max(x1,x2)),floor(min(x1,x2))};
        }
        else{
            return {-1};
        }
    }
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends