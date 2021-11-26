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
    Node *list = new Node();
    init(list, 10);

    Node* current = list;
    Node* last_third = NULL;

    while (current != NULL)
    {
        if (current->next!=NULL && current->next->next != NULL)
        {
            last_third = current;
        }
        current = current->next;
    }

    cout << last_third->data << endl;
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

/**
 * this problem can be generalised like
 * nth node from end, which can be solved by using
 * a slow pointer and a fast pointer, where, the
 * slow pointer doesn't move forward until n steps
 * This is achived by taking a counter variable count
 * and waiting until (count > n) while doint count++
 * every time fast pointer moves forward
*/