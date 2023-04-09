// Print number from n to 1.

// Return -> Counting in DESCENDING order

#include<iostream>
using namespace std;

void fun(int n){
    if(n==0)            // Base condition.
        return;
    cout << n << endl;  // Recursive call to function to itself.
    fun(n-1);
}

int main()
{
    fun(5);
    return 0;
}

// OUTPUT:
//     5
//     4
//     3
//     2
//     1