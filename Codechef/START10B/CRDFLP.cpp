#include<bits/stdc++.h>
using namespace std;


int main() {
    int arr[6]  = {2, 2, 3, 4, 5, 6};
    int myAnd = arr[0];

    for (int i = 0; i <  6; i++)
    {
        myAnd &= arr[i];
        cout << myAnd<< endl;
    }
    
    return 0;
}