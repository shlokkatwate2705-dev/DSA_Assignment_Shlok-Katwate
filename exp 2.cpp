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
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {

        int profit = prices[i] - minPrice;


        if (profit > maxProfit)
        {
            maxProfit = profit;
        }


        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
    }

    cout << "Maximum Profit: " << maxProfit << endl;
    return 0;
}
