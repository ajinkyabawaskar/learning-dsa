#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0, y = 0, z = 0;
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> temp;

            if (j == 0)
                x += temp;
            if (j == 1)
                y += temp;
            if (j == 2)
                z += temp;
        }
    }

    string result = "NO";

    if (x == 0 && y == 0 && z == 0)
    {
        result = "YES";
    }
    
    cout << result << endl;

    return 0;
}