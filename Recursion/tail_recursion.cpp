// Factorial(!) of a number using tail Recursion
// Tail Recursion -> Better Approch where after the base condition no extra work must be done.

#include<iostream>
using namespace std;

// Function with Tail Recursion
int fact(int n, int k){
    if(n==0 || n==1){           // Base condition
        return k;               // return -> 1*2*3
    }
    return fact(n-1, n*k);      // -->> Better Approch
}

// --->> Function without Tail Recursion <<---
// int fact(int n, int k){
//     if(n==0 || n==1){
//         return k;
//     }
//     return n*fact(n-1);
// }

int main()
{
    cout << fact(3,1);      // Initialy we need to pass K=1.
    return 0;
}


// OUTPUT:
//     6