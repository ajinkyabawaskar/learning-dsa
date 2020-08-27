#include <iostream>
using namespace std;

int main()
{
    // to store the number of test cases
    int t = 0;
    std::cin >> t;
    // to store the damage of chef's lightsaber
    long long chef = 0;
    // to store the health of darth
    long long darth = 0;

    // for all test cases
    while (t)
    {
        --t;
        // input the chef's power and darths's health
        std::cin >> darth;
        std::cin >> chef;

        // keep fighting until the health of darth reduces to zero or chef's lightsaber runs out of power
        while (darth > 0 && chef > 0)
        {
            // reduce the health of darth by the power of chef's lightsaber
            darth = darth - chef;
            // reduce the power of chef's lightsaber by half
            chef = chef / 2;
        }
        // after the fight
        if (darth > 0)
        {
            // if darth's health > 0, darth wins
            std::cout << 0;
            std::cout << "\n";
        }
        else
        {
            // if power of lightsaber >0 , chef wins
            std::cout << 1;
            std::cout << "\n";
        }
    }
    return 0;
}
