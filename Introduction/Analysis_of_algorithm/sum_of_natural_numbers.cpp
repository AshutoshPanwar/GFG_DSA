// Different approch to solve the same problem by different coder's.

#include<iostream>
using namespace std;

// coder 1
int fun1(int n)
{
    return n * (n + 1) / 2;
}
// ***** c1 *****

// Coder 2
int fun2(int n)
{
    int sum = 0;
    for (int i=1; i<=n; i++)
        sum = sum + i;
    return sum;
}
// ***** c2n + c3 *****

// Coder 3
int fun3(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=i; j++)
            sum++;
    return sum;
}
// ***** c4n^2 + c5n + c6 *****

int main()
{
    int n = 5;
    printf("%d\n", fun1(n));
    printf("%d\n", fun2(n));
    printf("%d", fun3(n));
    return 0;
}