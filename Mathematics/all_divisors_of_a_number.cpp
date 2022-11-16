// Print all the divisor of a number

#include<iostream>
using namespace std;

// Navie solution
void printDivisors(int n){
    for (int i = 0; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
}

// Efficiend Solution
void E_printDivisors(int n){
    int i;
    for (i = 1; i*i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << n/i << endl;
        }
    }
}

int main()
{
    cout <<"The divisors of 100 are: \n";
    printDivisors(100);
    cout <<"\nThe divisors of 100 are: \n";
    E_printDivisors(100);
    return 0;
}