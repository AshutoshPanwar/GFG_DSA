// LCM of two numebrs.

#include<iostream>
using namespace std;

// Naive solution
int lcm(int a, int b)
{
    int res = max(a, b);
    while(res > 0){
        if (res % a == 0 && res % b == 0){
            break;
        }
        res++;
    }
    return res;
}

// Efficient approch
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}
int E_lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
// Time copleixty: O(log(min(a,b)))

int main()
{
    int a = 4, b = 6;
    cout <<"LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;
    cout <<"LCM of " << a << " and " << b << " is " << E_lcm(a, b) << endl;
    return 0;
}