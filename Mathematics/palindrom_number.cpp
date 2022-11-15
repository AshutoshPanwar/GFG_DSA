// Check if a number is palindrom or not

#include<iostream>
using namespace std;

bool isPal(int n){
    int rev = 0;
    int tmp = n;
    while (tmp > 0)
    {
        int ld = tmp % 10;      // Last digit
        rev = rev * 10 + ld;
        tmp = tmp / 10;         // Remove the last digit.
    }
    return (rev == n);
}

int main()
{
    int n = 7007;
    if (isPal(n) == true) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
    return 0;
}

// Time complexity -> O(n)