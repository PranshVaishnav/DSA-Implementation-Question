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

Node *Deletion(Node *root, int key)
{
    Node *newroot = root;
    Node *prev = NULL;
    while (root != NULL)
    {
        if (root->data == key)
        {
            break;
        }
        else if (root->data < key)
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

    // If deleting Node is Leaf Node

    if (root->right == NULL && root->left == NULL)
    {

        int right = 0; // 1 if right child else 0
        if (prev == NULL)
        {
            return NULL;
        }
        else if (prev->data < root->data)
        {
            // right child
            prev->right = NULL;
            root = NULL;
            delete root;
        }
        else
        {
            prev->left = NULL;
            root = NULL;
            delete root;
        }

        return newroot;
    }

    // If deleting Node is having one child only
    else if (root->right != NULL ^ root->left != NULL)
    {

        // check if root is right child or left child of parent
        int right = 0; // 1 if right child else 0
        if (prev == NULL)
        {

            if (newroot->right != NULL)
                newroot = newroot->right;
            else
                newroot = newroot->left;

            root = NULL;
            delete root;
            return newroot;
        }
        else if (prev->data < root->data)
        {
            // right child
            right = 1;
        }

        // if child is right Child
        if (root->right != NULL)
        {
            if (right)
            {
                prev->right = root->right;
            }
            else
            {
                prev->left = root->right;
            }
        }
        // if child is left Child
        else
        {
            if (right)
            {
                prev->right = root->left;
            }
            else
            {
                prev->left = root->left;
            }
        }

        root = NULL;
        delete root;
        return newroot;
    }

    // If deleting node has more than 1 child
    else
    {
        Node *curr = root;
        Node *before = root;
        root = root->right;
        while (root->left != NULL)
        {
            before = root;
            root = root->left;
        }

        int temp = curr->data;
        curr->data = root->data;
        root->data = temp;
        if(before==curr)
        {
        before->right = root->right;
        root = NULL;
        delete root;
        }
        else{
        before->left = NULL;
        root = NULL;
        delete root;
        }
        
        if (prev == NULL)
        {
            newroot = curr;
        }
        return newroot;
    }
}

signed main()
{
    Node *root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);
    root->right->left = new Node(60);
    root->left->left = new Node(20);
    root->left->right = new Node(40);
    root->right->right = new Node(80);

    // print preorder
    print(root);
    cout << endl;

    cout << "Enter the value of element you want to delete: " << endl;
    int a;
    cin >> a;
    root = Deletion(root, a);
    cout << "After deletion the tree becomes: " << endl;
    print(root);
}