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

Node *Search(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return Search(root->left, key);
    }
    else
    {
        return Search(root->right, key);
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

    cout << "Insert ELement to find: " << endl;
    int a;
    cin >> a;
    if (Search(root, a) == NULL)
    {
        cout << "ELement Not present in the tree" << endl;
    }
    else
    {
        cout << "Element: " << Search(root, a)->data << " present in the tree" << endl;
    }
}