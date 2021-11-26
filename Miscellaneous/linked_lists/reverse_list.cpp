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
    //create linked list with 10 nodes
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

    Node *current = head;
    Node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        next = current->next;

        current->next = prev;

        prev = current;

        current = next;
    }

    head = prev;

    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
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