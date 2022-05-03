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

int countNode(Node *root)
{
    int x;
    int y;

    if (root != NULL)
    {
        x = countNode(root->left);
        y = countNode(root->right);
        return x + y + 1;
    }
    return 0;
}

int count_d2(Node *root)
{
    int x;
    int y;

    if (root != NULL)
    {
        x = count_d2(root->left);
        y = count_d2(root->right);
        if(root->left && root->right)
         return x + y + 1;
        else 
        return  x + y;
    }
    return 0;
}

int count_d1(Node *root)
{
    int x;
    int y;

    if (root != NULL)
    {
        x = count_d1(root->left);
        y = count_d1(root->right);
        if((root->left!=NULL) ^ (root->right!=NULL))
         return x + y + 1;
        else 
        return  x + y;
    }
    return 0;
}

int height(Node *root)
{
    int x;
    int y;

    if (root != NULL)
    {
        x = height(root->left);
        y = height(root->right);
        if(x>y)
        return x + 1;
        else 
        return y + 1;
    }
    return 0;
}


int leafNodes(Node *root)
{
    int x;
    int y;

    if (root != NULL)
    {
        x = leafNodes(root->left);
        y = leafNodes(root->right);
        if(!root->left && !root->right)
        return x + y + 1;
        else 
        return y + x;
    }
    return 0;
}

signed main()
{
    create();
    cout << "\nNumber of nodes in the tree are: " << countNode(root);
    cout << "\nNumber of nodes with degree 2 in the tree are: " << count_d2(root);
    cout << "\nNumber of nodes with degree 1 in the tree are: " << count_d2(root);
    cout << "\nHeight of the tree are: " << height(root);
    cout << "\nNumber of leaf nodes in the tree are: " << leafNodes(root);
    return 0;
}