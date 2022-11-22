// Find two numbers that appear Odd number of times.

#include<iostream>
using namespace std;

// Naive solution
void printOdd(int arr[], int n){
    for(int i = 0; i<n ; i++){
        int count = 0;
        for (int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
}

// Effective apporoch
void oddAppearing(int arr[], int n){
    int x = arr[0];
    for (int i = 1; i < n; i++)
    {
        x = x ^ arr[i];
    }
    int k = (x & (~(x-1)));
    int res=0, res2=0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i]&k) != 0)
            res = res ^ arr[i];
        else
            res2 = res2 ^ arr[i];
    }
    cout << res << ' ' << res2;
}

int main()
{
    int arr[] = {4, 2, 4, 5, 2, 3, 3, 1};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printOdd(arr, arr_size);
    cout << endl;
    oddAppearing(arr, arr_size);
    return 0;
}