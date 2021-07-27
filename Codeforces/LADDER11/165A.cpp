#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int arr[n * 2];
    int max = -1001;

    for (int i = 0; i < n * 2; i++)
    {
        cin >> arr[i];
        if(abs(arr[i]) > max) {
            max = arr[i];
        }
    }

    int matrix[max][max];
    int index = 0;

    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < n * 2; i += 2)
    {
        matrix[arr[i+1]][arr[i]] = 1;
    }

    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            cout << "(" << i << "," << j << ") is " << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}