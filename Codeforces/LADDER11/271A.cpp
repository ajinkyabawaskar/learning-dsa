#include <iostream>
#include <cmath>
using namespace std;

bool isUnique(int n)
{
    int digits[10] = {0};
    while (n > 0)
    {
        int rem = n % 10;
        n /= 10;
        digits[rem]++;
    }

    bool unique = true;
    for (int i = 0; i < 10; i++)
    {
        if (digits[i] > 1)
        {
            unique = false;
            break;
        }
    }
    return unique;
}

int main()
{
    int year;
    cin >> year;

    int index = 1;
    while (true)
    {
        if(isUnique(year + index)) {
            cout << year + index << endl;
            break;
        }
        else {
            index += 1;
        }
    }

    return 0;
}