// Factorial of a number

#include<iostream>
using namespace std;

// Iterative Solution
int fact(int n){
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}
// Time complexity -> O(n)
// Auxiliary Space: O(1)


// Recursive solution
int rec_fact(int n){
    // Base conditon
    if (n == 0)
        return 1;
    return n * rec_fact(n-1);
}
// Time complexity -> O(n)
// Auxiliary Space: O(n)

int main()
{
    int num = 19;
    cout << "Factorial of " << num << " is " << fact(num) << endl;
    cout << "Factorial of " << num << " is " << rec_fact(num) << endl;
    return 0;
}
