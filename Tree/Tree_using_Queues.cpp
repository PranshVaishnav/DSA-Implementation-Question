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

Node *root=new Node(0);

void Insert()
{
    Node *p;
   queue<Node*> q;
   int root_value=0;
   cout<<"Enter the value of root node: ";
   cin>>root_value;
   root=new Node(root_value);
   q.push(root);
   while(!q.empty())
   {
     p=q.front();
     q.pop();
     int x;
     cout<<"Enter the value of left child of "<<p->data<<": ";
     cin>>x;
     if(x!=-1)
     {
       Node *temp=new Node(x);
       p->left=temp;
       q.push(temp);
     }
     cout<<"Enter the value of right child of "<<p->data<<": ";
     cin>>x;
     if(x!=-1)
     {
       Node *temp=new Node(x);
       p->right=temp;
       q.push(temp);
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

signed main()
{
    Insert();
    preorder(root);
    return 0;
}