#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        string input;
        cin >> input;

        int n = input.length();
        char str[n];
        input.copy(str, n, 0);

        unordered_map<char, int> umap;
        for (int i = 97; i < 123; i++)
        {
            umap[char(i)] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            char the_char = str[i];
            umap[the_char]++;
        }

        int red = 0;
        int nonred = 0;

        for (int i = 97; i < 123; i++)
        {
            if (umap[char(i)] >= 2)
            {
                red++;
            }
            if (umap[char(i)] == 1)
            {
                nonred++;
            }
        }

        red += nonred / 2;
        cout << red << endl;
    }

    return 0;
}