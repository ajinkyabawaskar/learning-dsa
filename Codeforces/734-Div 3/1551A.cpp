#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int c1 = 0, c2 = 0;
        c1 = ceil(n / 3);
        c2 = (n - c1) / 2;

        if (c1 + (2 * c2) != n)
        {
            c1 += 1;
        }
        cout << c1 << " " << c2 << endl;
    }

    return 0;
}