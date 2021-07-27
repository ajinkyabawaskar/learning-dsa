#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l;
        cin >> n >> m >> l;

        int strip[l];
        unordered_map<int, int> map;

        for (int i = 0; i < m; i++)
        {
            int k;
            cin >> k;
            for (int j = 0; j < k; j++)
            {
                int temp;
                cin >> temp;
                map[temp] = i;
            }
        }

        int solution = 1;
        cin >> strip[0];

        for (int i = 1; i < l; i++)
        {
            cin >> strip[i];
            if (map[strip[i]] != map[strip[i - 1]])
            {
                solution++;
            }
        }

        cout << solution << endl;
    }

    return 0;
}