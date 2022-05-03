/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *root = new Node();

void create()
{

    int a;
    cout << "Enter the value of root node : " << endl;
    cin >> a;
    root->data = a;
    root->left = NULL;
    root->right = NULL;
    queue<Node *> q;
    q.push(root);
    Node *p, *t;
    int x;

    while (!q.empty())
    {
        p = q.front();
        q.pop();
        cout << "Enter the left Child of " << p->data << ":" << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node();
            t->data = x;
            t->left = t->right = NULL;
            p->left = t;
            q.push(t);
        }
        cout << "Enter the Right Child of " << p->data << ":" << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node();
            t->data = x;
            t->left = t->right = NULL;
            p->right = t;
            q.push(t);
        }
    }
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void LevelOrder(Node *root)
{
    Node *p;
    queue<Node *> q;
    q.push(root);
    int x;
    while (!q.empty())
    {
        p = q.front();
        int x = p->data;
        cout << x << " ";
        q.pop();
        if (p != NULL)
        {
            q.push(p->left);
            q.push(p->right);
        }
    }
}

signed main()
{
    create();
    cout << "Preorder of the tree is: ";
    preorder(root);
    cout << "\nPostorder of the tree is: ";
    postorder(root);
    cout << "\nInorder of the tree is: ";
    inorder(root);
    cout << "\nLevel Order of the tree is: ";

    LevelOrder(root);
    return 0;
}