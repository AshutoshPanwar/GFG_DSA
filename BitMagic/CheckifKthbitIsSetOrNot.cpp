// Check if Kth bit is set or not.

#include<iostream>
using namespace std;

// Naive approch
void isKthBitSet(int n, int k){
    int x = 1;
    for(int i=0; i<(k-1); i++)
        x = x*2;        // 2^(k-1)
    if((n&x) != 0)
        cout << "Yes";
    else
        cout << "No";
}

// Alternate naive solution
void isKthBitSet_secondApproch(int n, int k){
    int x = 1;
    for(int i=0; i<(k-1); i++)
        n = n / 2;
    if((n&x) != 0)
        cout << "Yes";
    else
        cout << "No";
}

// Efficient maehod 1
void isKthBitSet_effectiveApproch1(int n, int k){
    int x = (1 << (k-1));
    if((n&x) != 0)
        cout << "Yes";
    else
        cout << "No";
}

// Efficient maehod 2
void isKthBitSet_effectiveApproch2(int n, int k){
    int x = (n >> (k-1));
    if((n&x) != 0)
        cout << "Yes";
    else
        cout << "No";
}

int main()
{
    int n = 5, k = 3;
    // Function call
    isKthBitSet(n, k);
    cout << endl;
    isKthBitSet_secondApproch(n, k);
    cout << endl;
    isKthBitSet_effectiveApproch1(n, k);
    cout << endl;
    isKthBitSet_effectiveApproch2(n, k);
    return 0;
}