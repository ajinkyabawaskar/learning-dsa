#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    string sentence = "I love CPP";
    // expected = "CPP love I"

    // check if string's last char is a space,
    // if not, add it
    if (sentence[sentence.length() - 1] != ' ')
    {
        sentence += ' ';
    }

    vector<string> words;

    string temp;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == ' ')
        {
            if (temp[temp.length() - 1] == ' ')
            {
                temp = temp.substr(0, temp.length() - 1);
            }
            words.push_back(temp);
            temp = "";
        }
        else
        {
            temp += sentence[i];
        }
    }

    for (auto i = words.end(); i != words.begin(); i--)
    {
        cout << *i << " ";
    }
    cout << words[0] << endl;
}

int32_t main()
{
    fast;
    ll testCases = 0;
    cin >> testCases;
    while (testCases--)
    {
        solve();
    }
    return 0;
}