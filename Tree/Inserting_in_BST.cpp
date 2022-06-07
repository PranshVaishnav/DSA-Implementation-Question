// No duplicates present
// Inorder traversal gives sorted Elements.
// Catelon Number binary search tree possible

#include <iostream>
using namespace std;

// structure of node class

/*
       10
      /   \
     5     40
    /  \      \
   1    7      50

*/

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void print(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}

// Insertion always takes place at leaf node position..

// We need a rear pointer for keeping as we end at NULL postion so we cannot traverse back to the previous point.

void Insert(Node *root, int key)
{

    Node *prev = root;
    while (root != NULL)
    {
        if (root->data < key)
        {
            prev = root;
            root = root->right;
        }
        else
        {
            prev = root;
            root = root->left;
        }
    }
    Node *p = new Node(key);
    if (prev->data < key)
    {
        prev->right = p;
    }
    else
    {
        prev->left = p;
    }
}

signed main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(40);
    root->left->left = new Node(1);
    root->left->right = new Node(7);
    root->right->right = new Node(50);

    // print preorder
    print(root);
    cout << endl;

    cout << "Enter the value of element you want to insert: " << endl;
    int a;
    cin >> a;
    Insert(root, a);
    cout << "After inserion the tree becomes: " << endl;
    print(root);
}