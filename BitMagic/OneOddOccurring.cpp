// Find only one number that appear Odd number of times.

#include<iostream>
using namespace std;

// Naive solution
int fineOdd(int arr[], int n){
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j])
                count++;
        }
        if(count % 2 != 0)
            return arr[i];
    }
    return -1;
}

// Efficient solution
int getOddOccurrence(int arr[], int n){
    int res = arr[0];
    for(int i=1; i<n; i++){
        res = res ^ arr[i];
    }
    return res;
}

int main()
{
    int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    int n = sizeof(ar)/sizeof(ar[0]);
    cout << getOddOccurrence(ar, n);

    return 0;
}