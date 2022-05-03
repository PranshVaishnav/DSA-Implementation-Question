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
        data=x;
        left=NULL;
        right=NULL;
    }
};

void print_preorder(Node *root)
{
    if(root == NULL)
    {
        return ;
    }
   cout<<root->data<<" ";
   print_preorder(root->left);
   print_preorder(root->right); 
}

signed main()
{   
    Node *root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);

    cout<<"Succesfully created Tree"<<endl;
    
    print_preorder(root);
    return 0;
}