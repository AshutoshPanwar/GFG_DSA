// Check if a number is prime of not.

#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if (n == 1) return false;
    if (n == 2 || n == 3) return true;
    // Elemenating all the multiples of 2, 3.
    if (n % 2 == 0 || n %3 == 0) return false;
    // Elemenating all the multiples of 5.
    for(int i=5; i*i <= n; i=i+6)
        if(n%i==0 || n%(i+2)==0)
            return false;
    return true;
}

int main()
{
    if (isPrime(4) == true)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}