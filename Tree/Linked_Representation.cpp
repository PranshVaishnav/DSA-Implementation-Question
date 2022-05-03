/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void print_preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    print_preorder(root->left);
    print_preorder(root->right);
}

int height(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int x = height(root->left);
    int y = height(root->right);
    if (x > y)
    {
        return x + 1;
    }
    return y + 1;
}

int level(Node *root)
{
    return height(root) + 1;
}

void printCurrentLevelNodes(Node *root, int height)
{
    if(height==0)
    {
        cout<<root->data<<" ";
        return;
    }
    if(root->left!=NULL)
    printCurrentLevelNodes(root->left,height-1);
    if(root->right!=NULL)
    printCurrentLevelNodes(root->right,height-1);

}

void printLevelOrder(Node *root, int height)
{
    for (int i = 0; i <= height; i++)
    {
        printCurrentLevelNodes(root, i);
        cout << endl;
    }
}

signed main()
{
    Node *root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right=new Node(6);
    root->right->right->right=new Node(7);
    root->left->left->right=new Node(8);


    cout << "Succesfully created Tree" << endl;
    cout << "Height of the tree is:" << height(root) << endl;
    cout << "level of the tree is:" << level(root) << endl;
    printLevelOrder(root, height(root));
    print_preorder(root);
    return 0;
}