// Gess the output to see how recursion works.
// for better undestanding use the funciton call-stack.

#include<iostream>
using namespace std;

void fun(int n){
    if(n==0){       // Base condition.
        return;
    }
    fun(n-1);       // Recursive Function calling.
    cout << n << endl;
    fun(n-1);       // Recursive function calling
}

int main()
{
    fun(3);         // Parameterize function call
    return 0;
}

// OUTPUT:
// 1
// 2
// 1
// 3
// 1
// 2
// 1