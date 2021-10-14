#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int n = input.length();
    char str[n];
    input.copy(str, n, 0);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '4' || str[i] == '7')
        {
            count++;
        }
    }

    bool unlucky = true;
    
    if(count == 4 || count == 7) {
        unlucky = false;
    }

    if(unlucky) {
        cout << "NO";
    }
    else {
        cout << "YES";
    }

    return 0;
}