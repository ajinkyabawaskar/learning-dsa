#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        string result;

        if(b < n) {
            result = "NO";
        }
        else {
            if(a+c >= n) {
                result = "YES";
            }
            else {
                result = "NO";
            }
        }
        cout << result << endl;
    }
    
	return 0;
}
