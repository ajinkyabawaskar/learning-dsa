#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string input[n];
        for (int i = 0; i < n; i++)
        {
            cin >> input[i];
        }

        int alpha[5];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < input[i].length(); j++)
            {
                int temp = int(input[i][j]) - 97;
                alpha[temp]++;
            }
        }
        
        for (int  i = 0; i < 5; i++)
        {
            
        }
        
        
    }
    return 0;
}