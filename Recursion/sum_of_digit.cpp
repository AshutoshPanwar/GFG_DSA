// Sum of digits of a Number.
// n % 10 -> Gives last digit of n
// n / 10 -> Removes the last digit

#include<iostream>
using namespace std;

int getSum(int n)
{
    if(n <= 9){                       // Base Condition
        return 0;
    }

    return (n % 10) + getSum( n / 10 );   // Recursive Call

}

int main()
{
    cout << getSum(253);
    return 0;
}

// OUTPUT:
//     10