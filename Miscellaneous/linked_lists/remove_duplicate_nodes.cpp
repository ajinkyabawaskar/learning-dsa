#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

class Node
{
public:
    int data;
    struct Node *next;
};

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

void init(Node *head, int length)
{
    for (int i = 1; i < length; i++)
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
}

void solve()
{
    Node *head = new Node();
    init(head, 10);

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    print(head);

    unordered_map<Node *, int> map;

    Node *current = head;
    Node *prev = NULL;

    while (current != NULL)
    {
        if (map.find(current) != map.end())
        {
            // entry found, duplicate node, need to remove
            prev->next = current->next;
            delete (current);
        }
        else
        {
            // new entry, save it
            map[current]++;
            prev = current;
        }
        current = prev->next;
    }

    print(head);
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