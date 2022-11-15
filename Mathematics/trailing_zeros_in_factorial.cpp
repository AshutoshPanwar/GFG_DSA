// Trailing zeors in Factorial of a number

#include<iostream>
using namespace std;

// Naive approch
int countTrailingZeros(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    int res = 0;
    while (fact%10 == 0)
    {
        res++;
        fact = fact / 10;
    }
    return res;
}
// Time complexit: O(n)


// Efficient approch
int countTrailingZeros_better(int n){
    int res = 0;
    for (int i = 5; i <= n; i=i*5)
    {
        res = res + (n / i);
    }
    return res;
}
// Time complexit: O(log n)

int main()
{
    int num = 5;
    cout << "Trailing Zeros in Factorial of " << num << " is " << countTrailingZeros(num) << endl;
    cout << "Trailing Zeros in Factorial of " << num << " is " << countTrailingZeros_better(num) << endl;
    return 0;
}