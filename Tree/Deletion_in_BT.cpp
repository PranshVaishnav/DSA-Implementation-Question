// Insert the node in the order of level Order of the tree
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

Node *root = new Node(0);

void Create()
{
    Node *p;
    queue<Node *> q;
    int root_value = 0;
    cout << "Enter the value of root node: ";
    cin >> root_value;
    root = new Node(root_value);
    q.push(root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        int x;
        cout << "Enter the value of left child of " << p->data << ": ";
        cin >> x;
        if (x != -1)
        {
            Node *temp = new Node(x);
            p->left = temp;
            q.push(temp);
        }
        cout << "Enter the value of right child of " << p->data << ": ";
        cin >> x;
        if (x != -1)
        {
            Node *temp = new Node(x);
            p->right = temp;
            q.push(temp);
        }
    }
}

Node *ans = NULL;
Node *replace_node = NULL;
Node *prev_node = NULL;

void findElement(Node *root, int value)
{

    if (ans)
        return;
    if (root)
    {
        findElement(root->left, value);
        if (root->data == value)
        {
            ans = root;
            return;
        }
        findElement(root->right, value);
        if (root->data == value)
        {
            ans = root;
            return;
        }
    }
}

void replaceNode(Node *root)
{
    queue<Node *> p;
    Node *r = NULL;
    p.push(root);
    while (!p.empty())
    {
        r = p.front();
        p.pop();
        if (r->left != NULL)
        {
            p.push(r->left);
        }
        if (r->right != NULL)
        {
            p.push(r->right);
        }
        if (r->right == NULL && r->left == NULL)
        {
            replace_node = r;
        }
        else{
           prev_node=r;
        }
    }
}

void Delete(Node *root, int value)
{
    findElement(root, value);
    replaceNode(root);
    ans->data=replace_node->data;
    if(prev_node->right!=NULL)
    {
        prev_node->right=NULL;
    }
    else{
        prev_node->left=NULL;
    }
}

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

signed main()
{
    Create();
    print_preorder(root);cout<<endl;
    int a;
    cout<<"Enter the element to delete: ";
    cin>>a;
    Delete(root, a);
    cout<<endl;
    print_preorder(root);
    return 0;
}
