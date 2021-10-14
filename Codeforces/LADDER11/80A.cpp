#include <iostream>
using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int nextPrime;

    int index = 1;
    while (true)
    {
        int temp = n + index;
        if(isPrime(temp)) {
            nextPrime =  temp;
            break;
        }
        else {
            index++;
        }
    }

    if(nextPrime == m) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}