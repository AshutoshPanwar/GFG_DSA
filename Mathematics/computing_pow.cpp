// Computing power of a number

#include<iostream>
using namespace std;

// Naive approch
int power(int x, int n){
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res = res * x;
    }
    return res;
}

// Recursive solution
int E_power(int x, int n){
    if(n==0)
        return 1;
    int temp = power(x, n/2);
    temp = temp * temp;
    if(n % 2 == 0)
        return temp;
    else
        return temp * x;
}

// Iterative solutin
int I_power(int x, int n){
    int res = 1;
    while(n > 0){
        if(n % 2 != 0)
            res = res * x;
        x = x* x;
        n = n/2;
    }
    return res;
}

int main()
{
    cout << power(2,2) << endl;
    cout << I_power(2,2) << endl;
    return 0;
}