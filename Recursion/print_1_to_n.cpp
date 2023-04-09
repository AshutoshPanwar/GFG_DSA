// Print number from 1 to n using recursion.

// Return -> Counting in ascending order

#include<iostream>
using namespace std;

void fun(int n){
    if(n==0)            // Base condition.
        return;
    fun(n-1);           // Recursive call to function to itself.
    cout << n << endl;
}

int main()
{
    fun(5);
    return 0;
}

// OUTPUT:
    // 1
    // 2
    // 3
    // 4
    // 5