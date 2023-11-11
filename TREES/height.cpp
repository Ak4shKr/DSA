#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

node *buildTree(node *root)
{
    cout << "Enter the data:" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = height(root->left);
    int r = height(root->right);

    return max(l, r) + 1;
}

int main()
{

    node *root = NULL;
    // creating an tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // 5 7 8 12 -1 -1 7 -1 -1 -1 4 3 -1 -1 2 7 6 -1 -1 -1 -1
    root = buildTree(root);

    // cout << root << endl;
    // cout << root->data << endl;
    // cout << root->left << endl;
    // cout << root->left->data << endl;
    // cout << root->right << endl;
    // cout << root->right->data << endl;
    // cout << root->right->right << endl;
    // cout << root->left->left << endl;

    // node *p = root->right;
    // cout << "address is : " << p;
    cout << endl;
    cout << "height is : " << height(root) << endl;
    cout << endl;

    return 0;
}