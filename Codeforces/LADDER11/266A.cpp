#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char str[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    char previous = str[0];
    int removed = 0;
    for (int i = 1; i < n; i++)
    {
        if (str[i] == previous)
        {
            removed++;
        }
        else {
            previous = str[i];
        }
    }

    cout << removed;
    return 0;
}