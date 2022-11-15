// Count the number of digits in the number.

#include<iostream>
using namespace std;

int countDigits(int n)
{
    int dig=0;
    while (n > 0){
        n = n / 10;     // Remove the last digits.
        dig++;      // Increment the counter.
    }
    return dig;
}

int main()
{
    cout << "Number of digits: " << countDigits(100);
    return 0;
}

// Time complexity -> O(n)