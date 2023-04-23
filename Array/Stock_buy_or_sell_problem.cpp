// Stock buy or sell problem.

#include<iostream>
using namespace std;

int Naive_maxProfit(int price[], int start, int end)
{
    if(start >= end)
        return 0;
    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i+1; j <= end; j++)
        {
            if (price[j] > price[i])
            {
                int curr_profit = price[j] - price[i]
                                    + Naive_maxProfit(price, start, i-1)
                                    + Naive_maxProfit(price, j+1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

int maxProfit(int price[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (price[i] > price[i-1])
        {
            profit += price[i] - price[i-1];
        }
    }
    return profit;
}

int main()
{
    int arr[] = {1, 5, 3, 8, 12}, n = 5;

    // cout << Naive_maxProfit(arr, 0, n - 1) << endl;
    cout << maxProfit(arr, n) << endl;
    return 0;
}


// OUTPUT:
//     13