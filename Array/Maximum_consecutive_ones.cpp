// Count Max number of 1's in an array.

#include<iostream>
using namespace std;

int Naive_maxConsecutiveOnes(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
            {
                curr++;
            }
            else{
                break;
            }
        }
        res = max(res, curr);
    }
    return res;
}


int maxConsecutiveOnes(int arr[], int n)
{
    int res = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            curr = 0;
        }
        else{
            curr++;
            res = max(res, curr);
        }
    }

    return res;
}


int main()
{
    int arr[] = {0, 1, 1, 1, 0, 1, 1}, n = 7;
    cout << maxConsecutiveOnes(arr, n) << endl;
    return 0;
}


// OUTPUT:
//     3