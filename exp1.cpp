#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    int prices[100];
    cout << "Enter prices of stock for each day: ";
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    int minPrice = prices[0];
    int buyIndex = 0;
    int sellIndex = 0;
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        int profit = prices[i] - minPrice;

        if (profit > maxProfit)
        {
            maxProfit = profit;
            sellIndex = i;
        }

        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
            buyIndex = i;
        }
    }

    cout << "\n----- Result -----\n";
    cout << "Maximum Profit: " << maxProfit << endl;

    if (maxProfit > 0)
    {
        cout << "Buy on Day Index: " << buyIndex << " (Price = " << prices[buyIndex] << ")" << endl;
        cout << "Sell on Day Index: " << sellIndex << " (Price = " << prices[sellIndex] << ")" << endl;
    }
    else
    {
        cout << "No profit can be made (prices only decrease)." << endl;
    }

    return 0;
}
