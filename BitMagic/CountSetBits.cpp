// Count number of set Bit's

#include<iostream>
using namespace std;

// Naive approch
int countSetBits(int n){
    int res = 0;
    while (n > 0)
    {
        if((n&1) != 0)  // (n%2 == 1)
            res++;
        n = n/2;
    }
    return res;
}

// Brain Kerningum's Algorithm
int countSetBits1(int n){
    int res = 0;
    while (n > 0)
    {
        n = n & (n-1);
        res = res + 1;
    }
    return res;
}

int main()
{
    int n = 5;
    // Function call
    cout << countSetBits(n) << endl;
    cout << endl;
    cout << countSetBits1(n) << endl;
    return 0;
}