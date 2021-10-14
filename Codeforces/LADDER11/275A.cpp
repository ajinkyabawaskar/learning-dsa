#include <iostream>
using namespace std;

int main()
{
    int lights[3][3];
    int press[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> press[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            lights[i][j] = 1;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // for (int k = 0; k < press[i][j]; k++)
            if(press[i][j] % 2 != 0)
            {
                // toggle light[i][j]
                lights[i][j] *= -1;

                // toggle upper if exists
                if (j - 1 >= 0)
                {
                    lights[i][j - 1] *= -1;
                }

                // toggle lower if exists
                if (j + 1 < 3)
                {
                    lights[i][j + 1] *= -1;
                }

                // toggle left if exists
                if (i - 1 >= 0)
                {
                    lights[i - 1][j] *= -1;
                }

                // toggle right if exists
                if (i + 1 < 3)
                {
                    lights[i + 1][j] *= -1;
                }
            }
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (lights[i][j] == -1)
                lights[i][j] = 0;
            cout << lights[i][j];
        }

        cout << endl;
    }
    return 0;
}