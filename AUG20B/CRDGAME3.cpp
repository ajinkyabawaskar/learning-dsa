#include <iostream>
using namespace std;

int main()
{
    // to store the number of test cases
    long T = 1;
    long chef = 0;
    long rick = 0;
    int ct1 = 0;
    int ct2 = 0;
    // input the number of test cases
    std::cin >> T;
    // for all test cases
    while (T)
    {
        --T;
        ct1 = 0;
        ct2 = 0;
        std::cin >> chef;
        std::cin >> rick;

        while (chef > 0)
        {
            ct1 = chef/9;
            if(chef%9>0) {
            ct1 += 1;
            }
            chef = 0;
        }
        while (rick > 0)
        {
            ct2 = rick/9;
            if(rick%9>0){
             ct2 += 1;
            }
            rick = 0;
        }
        if (ct1 < ct2)
        {
            std::cout << 0 << " " << ct1 << "\n";
        }
        else
        {
            std::cout << 1 << " " << ct2 << "\n";
        }
    }
    return 0;
}
