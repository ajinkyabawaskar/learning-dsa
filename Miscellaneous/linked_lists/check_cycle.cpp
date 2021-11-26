#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

// A linked list node
class Node
{
public:
    int data;
    struct Node *next;
};

void solve()
{
    // step 1 - create linked list with 10 nodes
    Node *head = new Node();

    for (int i = 1; i < 10; i++)
    {
        Node *temp = new Node();
        temp->data = i;

        // find end of current list
        Node *end = head;
        while (end->next != NULL)
        {
            end = end->next;
        }
        end->next = temp;
    }

    // step 2 - create cycle
    Node *last = head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = head;

    // now detect the cycle
    unordered_map<Node *, int> map;

    Node *current = head;

    while (current != NULL)
    {
        //  found in map, i.e. already visited node 
        if (map.find(current) != map.end())
        {
            cout << current->data << endl;
            break;
        }
        else
        {
            // insert in map
            map[current]++;
            current = current->next;
        }
    }

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