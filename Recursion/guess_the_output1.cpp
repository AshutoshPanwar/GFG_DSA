// Gess the output to see how recursion works.
// for better undestanding use the funciton call-stack diagram.

#include<iostream>
using namespace std;

void fun(int n){
    if(n==0){       // Base or Termination condition to stop recursion.
        return;
    }
    cout << n << endl;
    fun(n-1);       // Recursive calling of function to self.
    cout << n << endl;
}

int main()
{
    fun(3);     // Parameterized function calling
    return 0;
}



// OUTPUT:
//     3
//     2
//     1
//     1
//     2
//     3