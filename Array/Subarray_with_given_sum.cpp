// Sub array with given sum.

#include<iostream>
using namespace std;

void Naive_subArraySum(int arr[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int currSum = arr[i];

        if(currSum == sum){
            cout << "Sum found at indexes: " << i << endl;
            return;
        }
        else{
            for (int j = i+1; j < n; j++)
            {
                currSum += arr[j];

                if (currSum == sum)
                {
                    cout << "Sum found between " << i << " and " << j << endl;
                    return;
                }
            }
        }
    }
    cout << "No subarray found!" << endl;
    return;
}


int subArraySum(int arr[], int n, int sum)
{
    int curr_sum = arr[0], start = 0;
    for (int i = 1; i < n; i++)
    {
        while (curr_sum > sum && start < i-1)
        {
            curr_sum = curr_sum - arr[start];
            start++;
        }
        if (curr_sum == sum)
        {
            cout << "Sum found b/w " << start << " and " << i-1 << endl;
            return 1;
        }
        if (i < n)
        {
            curr_sum = curr_sum + arr[i];
        }
    }
    cout << "No SubArray Found." << endl;
    return 0;
}


int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 23;
	subArraySum(arr, n, sum);
    return 0;
}

// OUTPUT:
//     Sum found b/w 1 and 4