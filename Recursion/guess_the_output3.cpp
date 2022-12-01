// Gess the output to see how recursion works.
// for better undestanding use the funciton call-stack.

// Return Log(n)base-2

#include<iostream>
using namespace std;

int fun(int n){
    if(n==1){
        return 0;
    }
    else
        return 1+fun(n/2);
}

int main()
{
    cout << fun(16);
    return 0;
}