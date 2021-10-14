#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int count = 5;
    for (int i = 1; i < 6; i++)
    {
        if ((sum + i) % (n + 1) == 1)
        {
            count--;
        }
    }
    cout << count << endl;

    return 0;
}