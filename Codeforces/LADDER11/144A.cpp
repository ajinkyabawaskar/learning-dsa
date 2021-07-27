#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n] = {0};

    int minPos = 0;
    int maxPos = 0;

    int min = INT_MAX;
    int max = -1;

    int numberOfSwaps = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            maxPos = i;
        }

        if (arr[i] <= min)
        {
            min = arr[i];
            minPos = i;
        }
    }

    if (minPos != (n - 1) || maxPos != 0)
    {
        if (maxPos > minPos)
        {
            numberOfSwaps = (n - 1) - minPos;
            numberOfSwaps += maxPos - 1;
        }
        else if (maxPos < minPos)
        {
            numberOfSwaps = (n - 1) - minPos;
            numberOfSwaps += maxPos;
        }
        else
        {
            numberOfSwaps = 0;
        }
    }

    cout << numberOfSwaps << endl;

    return 0;
}