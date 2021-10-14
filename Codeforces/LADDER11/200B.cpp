#include <iostream>
#include <iomanip>
#define dd double
using namespace std;

int main()
{
    int n;
    cin >> n;

    dd sum = 0, temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }

    dd total = (dd)n;
    dd orange = sum / total;

    cout << fixed << setprecision(12);
    cout << orange << endl;
    
    return 0;
}