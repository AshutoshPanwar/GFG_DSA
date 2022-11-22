// Check if a number is Power of two or not.

#include<iostream>
using namespace std;

// Naive solution
bool inPow2(int n){
    if (n == 0)
    {
        return false;
    }
    while (n != 1)
    {
        if(n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
}

// Efficient solution
bool isPow2_EF(int n){
    if(n == 0){
        return 0;
    }
    return ((n & (n-1)) == 0);
}

int main()
{
    cout << inPow2(8);
    cout << endl;
    cout << isPow2_EF(8);
    return 0;
}