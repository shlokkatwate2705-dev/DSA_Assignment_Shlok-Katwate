#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter number of people: ";
    cin >> n;

    int tickets[100];
    cout << "Enter number of tickets each person wants: ";
    for (int i = 0; i < n; i++)
    {
        cin >> tickets[i];
    }

    cout << "Enter position of person (k): ";
    cin >> k;

    int time = 0;

    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (tickets[i] > 0)
            {
                tickets[i]--;
                time++;


                if (i == k && tickets[i] == 0)
                {
                    cout << "Total time: " << time << " seconds" << endl;
                    return 0;
                }
            }
        }
    }
}

