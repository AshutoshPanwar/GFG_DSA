// Sum of digits.

#include<iostream>
using namespace std;

int getSum(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%10) + getSum(n/10);
    }
}

int main()
{
    cout << getSum(253);
    return 0;
}