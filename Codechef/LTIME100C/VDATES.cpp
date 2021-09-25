#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--)  {
        int d,l, r;
        cin >> d >> l >> r;
        string result = "";
        if(d<l) {
            result = "Too Early";
        }
        else if(d>r) {
            result = "Too Late";
        }
        else {
             result = "Take second dose now";
        }
        cout << result << endl;
    }
	return 0;
}
