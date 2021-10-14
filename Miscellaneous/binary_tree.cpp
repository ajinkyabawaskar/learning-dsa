#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int _val)
    {
        val = _val;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int val;
    cin >> val;

    if (val == -1)
    {
        return NULL;
    }

    Node *root = new Node(val);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void inorder(Node *root) {
    if(root != NULL) {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

void preorder(Node *root) {
    if(root != NULL) {
        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root) {
    if(root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->val << " ";
    }
}

int main()
{
    Node* root = buildTree();
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);
    return 0;
}