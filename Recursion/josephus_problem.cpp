// Josephus Problem (If N person are standing in a circle and the k-th person is killed then which person at index will survive.)

#include<iostream>
using namespace std;

int josephus(int n, int k){
    if(n==1){
        return 0;
    }
    else
        return (josephus(n-1, k)+k)%n;
}

int main()
{
    int n = 5;
    int k = 3;
    cout << "The chosen place is " << josephus(n, k);
    return 0;
}