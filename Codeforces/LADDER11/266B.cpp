#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    char s[n], mod[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        mod[i] = s[i];
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                mod[j] = 'G';
                mod[j + 1] = 'B';
            }
        }
        for (int j = 0; j < n; j++)
        {
            s[j] = mod[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << mod[i];
    }

    cout << endl;
    return 0;
}