#include <bits/stdc++.h>
using namespace std;

int findSum(int n)
{
	return n * (n + 1) / 2;
}

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		string result = "NO";

		if (findSum(n) % 2 == 0)
		{
			result = "YES";
		}

		cout << result << endl;

		if (result == "YES")
		{
			vector<int> a;
			vector<int> b;

			bool flag = true;

			for (int i = 1; i <= n; i++)
			{
				if (flag)
				{
					a.push_back(i);
					if (i == 1)
					{
						flag = false;
					}
					else
					{
						if (1 + i <= n)
						{
							a.push_back(i + 1);
							i++;
							flag = false;
						}
					}
				}
				else
				{
					// b ki baari
					b.push_back(i);
					b.push_back(i + 1);
					i++;
					flag = true;
				}
			}

			for (auto i = a.begin(); i != a.end(); ++i) 
				cout << *i << " ";
			cout << endl;

			reverse(b.begin(), b.end());
			for (auto i = b.begin(); i != b.end(); ++i)
				cout << *i << " ";
			cout << endl;
		}
	}

	return 0;
}
