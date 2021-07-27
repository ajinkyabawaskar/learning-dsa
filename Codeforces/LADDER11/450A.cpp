#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int unsatisfiedKids = n;
    int lastPos = -1;

    while (unsatisfiedKids > 0)
    {
        for (int j = 0; j < n; j++)
        {

            for (int i = 0; i < n; i++)
            {
                // -1 indicates that candies already given
                if (arr[i] != -1)
                {
                    if (arr[i] <= m)
                    {
                        arr[i] = -1;
                    }
                    else
                    {
                        arr[i] -= m;
                    }
                    lastPos = i;
                }
                else
                {
                    unsatisfiedKids--;
                }
            }
        }
    }

    cout << lastPos + 1;
    return 0;
}