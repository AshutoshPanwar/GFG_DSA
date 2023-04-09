// Sum of first N natural number using recursion.
// It'S NON-TAIL recursive approch.


#include<iostream>
using namespace std;

int fun(int N){
    if(N==0)                // Base condition
        return 0;
    return N + fun(N-1);    // Recursive function call
}

int main()
{
    cout << fun(4);
    return 0;
}

// OUTPUT:
//     10