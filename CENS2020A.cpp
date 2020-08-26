#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    fast;
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int sizeOfArray = 0;
        int solution = 0;
        cin >> sizeOfArray;
        int arr[sizeOfArray] = {0};

        for (int i = 0; i < sizeOfArray; i++)
            cin >> arr[i];

        for (int i = 0; i < sizeOfArray; i++)
        {
            for (int j = i + 1; j < sizeOfArray; j++)
            {
                if ((arr[i] & arr[j] == arr[i]))
                {
                    solution++;
                }
            }
        }
        cout << solution << endl;
    }

    return 0;
}