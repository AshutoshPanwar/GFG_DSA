// Sum of first N natural number.

#include<iostream>
using namespace std;

int fun(int N){
    if(N==0)
        return 0;
    return N + fun(N-1);
}

int main()
{
    cout << fun(4);
    return 0;
}