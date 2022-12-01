// Gess the output to see how recursion works.
// for better undestanding use the funciton call-stack.

// Decimal to Binary

#include<iostream>
using namespace std;

void fun(int n){
    if(n==0){
        return;
    }
    fun(n/2);
    cout << (n%2);
}

int main()
{
    fun(7);
    return 0;
}