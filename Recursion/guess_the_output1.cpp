// Gess the output to see how recursion works.
// for better undestanding use the funciton call-stack.

#include<iostream>
using namespace std;

void fun(int n){
    if(n==0){
        return;
    }
    cout << n << endl;
    fun(n-1);
    cout << n << endl;
}

int main()
{
    fun(3);
    return 0;
}