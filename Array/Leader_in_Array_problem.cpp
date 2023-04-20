// Leader's in array Problem -> No element to the left of current element must not be greate or equal to current element.

#include<iostream>
using namespace std;

void Nainve_leaders(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = false;
                break;
            }
        }
        if(flag == true){
            cout << arr[i] << " ";
        }
    }
}


void leaders(int arr[], int n)              // In this approch we get result in reverse order.
{
    int curr_leader = arr[n-1];
    cout << curr_leader << " ";
    for (int i = n-2; i >= 0; i--)
    {
        if (arr[i] > curr_leader)
        {
            curr_leader = arr[i];
            cout << curr_leader << " ";
        }
    }
}


int main()
{
    int arr[] = {7, 10, 4, 10, 6, 5, 2}, n = 7;
    leaders(arr, n);
    cout << endl;
    return 0;
}


// OUTPUT:
//     2 5 6 10