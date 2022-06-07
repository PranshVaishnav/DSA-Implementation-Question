// No duplicates present
// Inorder traversal gives sorted Elements.
// Catelon Number binary search tree possible

#include <iostream>
using namespace std;

// structure of node class
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data=x;
        left=right=NULL;
    }

};


void print(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

//        10
//      /   \
//     5     40
//    /  \      \
//   1    7      50
signed main()
{
    Node *root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(40);
    root->left->left=new Node(1);
    root->left->right=new Node(7);
    root->right->right=new Node(50);

    //print preorder
    print(root);
}