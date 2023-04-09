// Gess the output to see how recursion works.
// for better undestanding use the funciton call-stack.

// Return Log(n)base-2
// We will get same ans for both even & odd values because we are explicitly converting to int.

#include<iostream>
using namespace std;

int fun(int n){
    if(n==1){
        return 0;
    }
    else
        return 1+fun(n/2);      // Change 2 to any int then we will get log base of that no.
}

int main()
{
    cout << fun(16);
    return 0;
}

// OUTPUT:
//     4