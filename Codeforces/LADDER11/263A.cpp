#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int temp, moves = 0;

    for (int row = 1; row < 6; row++)
    {
        for (int col = 1; col < 6; col++)
        {
            cin >> temp;
            if (temp == 1)
            {
                moves += abs(col-3);
                moves += abs(row-3);
            }
        }
    }

    cout << moves << endl;
    return 0;
}