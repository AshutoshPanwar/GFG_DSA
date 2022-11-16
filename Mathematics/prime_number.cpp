// Check for Prime Number

#include<iostream>
using namespace std;

// Naive Approch
bool isPrime(int a){
    if (a == 1)
    {
        return false;
    }
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
// Time comlexity: O(n)


// Efficient Solution
bool E_isPrime(int n){
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i*i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// More Efficient Solution
bool M_E_isPrime(int n){
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i*i <= n; i=i+6)
    {
        if (n % i == 0 || n % (i+2) == 0)
            return false;
    }
    return true;
}

int main()
{
    isPrime(11) ? cout << " true\n" : cout << " false\n";
    E_isPrime(11) ? cout << " true\n" : cout << " false\n";
    M_E_isPrime(11) ? cout << " true\n" : cout << " false\n";
    return 0;
}