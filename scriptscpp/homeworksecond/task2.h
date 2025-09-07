#include <iostream>

using namespace std;

void task2()
{
    cout << "\n=== TASK 2 ===\n";
    int profit[12];

    cout << "Enter company profits for 12 months:\n";
    for (int i = 0; i < 12; i++)
    {
        cout << "Month " << (i + 1) << ": ";
        cin >> profit[i];
    }

    int start, end;
    cout << "Enter range (start and end month): ";
    cin >> start >> end;

    start--;
    end--;

    if (start < 0 or end >= 12 or start > end)
    {
        cout << "Invalid range!\n";
        return;
    }

    int maxProfit = profit[start], minProfit = profit[start];
    int maxMonth = start, minMonth = start;

    for (int i = start + 1; i <= end; i++)
    {
        if (profit[i] > maxProfit)
        {
            maxProfit = profit[i];
            maxMonth = i;
        }
        if (profit[i] < minProfit)
        {
            minProfit = profit[i];
            minMonth = i;
        }
    }

    cout << "Max profit: " << maxProfit << " (month " << (maxMonth + 1) << ")\n";
    cout << "Min profit: " << minProfit << " (month " << (minMonth + 1) << ")\n";
}
