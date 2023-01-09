#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxProfit(int price[0], int n)
{
    int buy = price[0], max_profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (buy > price[i])
        {
            buy = price[i];
        }
        else if (price[i] - buy > max_profit)
        {
            max_profit = price[i] - buy;
        }
        return max_profit;
    }
}

int main()
{
    int prices[] = {1, 8, 9, 5, 75, 5, 2, 8, 6, 2, 8};
    int n = sizeof(prices) / sizeof(prices[0]);
    int max_profit = maxProfit(prices, n);
    cout << max_profit << endl;
    return 0;
}