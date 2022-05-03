/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

char tree[10];

int root(char a)
{
    if (tree[0] != '\0')
        cout << "Root has already been added" << endl;
    else
        tree[0] = a;

    return 0;
}

int set_lchild(char a, int parent)
{
    if (tree[parent] == '\0')
        cout << "\nCan't set child at "
             << (parent * 2) + 1;
     else tree[2 * parent + 1] = a;

    return 0;
}

int set_rchild(char a, int parent)
{
    if (tree[parent] == '\0')
        cout << "\nCan't set child at "
             << (parent * 2) + 2
             << " , no parent found";
    else
        tree[2 * parent + 2] = a;

    return 0;
}

int print_tree()
{
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        if (tree[i] != '\0')
            cout << tree[i];
        else
            cout << "-";
    }
    return 0;
}

signed main()
{
    root('A');
    set_lchild('B', 0);
    set_rchild('C', 0);
    set_lchild('D', 1);
    set_rchild('E', 1);
    set_lchild('F', 2);
    set_rchild('G', 2);
    print_tree();
    return 0;
}