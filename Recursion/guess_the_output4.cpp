// Gess the output to see how recursion works.
// for better undestanding use the funciton call-stack.

// Return -> Binary equivalent to that no.

#include<iostream>
using namespace std;

void fun(int n){
    if(n==0){       // Base Case
        return;
    }
    fun(n/2);       // Recursive funtion calling
    cout << (n%2);  // Print Remainder in reverse order to construct Binary value.
}

int main()
{
    fun(7);
    return 0;
}


// OUTPUT:
//      111