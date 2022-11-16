// Find the HCF of two numbers.

#include<iostream>
using namespace std;

// Standard approch
int gcd(int a, int b)
{
    int res = min(a, b);
    while(res > 0){
        if (a % res == 0 && b % res == 0){
            break;
        }
        res--;
    }
    return res;
}
// Time complexity: O(min(m,n))


// Euclide Algorithm
int Ea_gcd(int a, int b)
{
    while(a != b){
        if (a > b)
            a = a -b;
        else
            b = b -a;
    }
    return a;
}
// Time Complexity: O(min(a,b))


// More refined vesion of Euclide Algorithm
int M_Ea_gcd(int a, int b)
{
    if (b == 0)
        return a;
    return M_Ea_gcd(b, a%b);
}
// Time Complexity: O(log(min(a,b))

int main()
{
    int a = 10, b = 15;
    cout << "GCD of " << a << " and " << b << " is "  << gcd(a, b) << endl;
    cout << "GCD of " << a << " and " << b << " is "  << Ea_gcd(a, b) << endl;
    cout << "GCD of " << a << " and " << b << " is "  << M_Ea_gcd(a, b) << endl;
    return 0;
}