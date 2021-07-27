#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        unordered_map<int, int> numbers;
        int arr[n];

        // input numbers and the occurrence of each number
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (numbers.find(arr[i]) == numbers.end())
            {
                numbers[arr[i]] = 1;
            }
            else
            {
                numbers[arr[i]]++;
            }
        }

        // count of each color
        unordered_map<int, int> cc;
        for (int i = 0; i < k; i++)
        {
            cc[i + 1] = 0;
        }

        int colors[n] = {0};
        for (int i = 0; i < n; i++)
        {
            if(colors[i] == 0) {
                // the block is uncolored, then
                // how to know which color to enter?

                // check color count for it
                // check next alphabet condition for it
    
                
            }
        }
        
    }

    return 0;
}