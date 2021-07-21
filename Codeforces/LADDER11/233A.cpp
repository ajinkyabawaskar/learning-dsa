#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n % 2 != 0) {
        cout << -1;
    }
    else {
        for(int i = 2; i <=n; i+=2) {
            cout << i << " ";
            cout << i - 1 << " ";
        }
    }

    return 0;
}