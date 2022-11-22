// All Prime numbers less than a give number.

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
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

// Naive solution
void printPrimes(int n){
    for (int i = 0; i < n; i++)
    {
        if(isPrime(i))
            cout << i << endl;
    }
}

// Effective solution
void SieveOfEratosthenes(int n){
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

int main()
{
    printPrimes(10);
    SieveOfEratosthenes(10);
    return 0;
}