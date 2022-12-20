#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node *left;
    struct node *right;
    node(int k)
    {
        key=k;
        left=right=nullptr;
    }

};
node *insert(node *root,int x)
{
    if(root == nullptr)
    {
        return new node(x);
    }
    if(root->key<x)
    {
        root->right=insert(root->right,x);
    }
    else if(root->key>x)
    {
        root->left=insert(root->left,x);
    }
    return root;
}
void inorder(node *root)
{
    if(root!=nullptr)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
int main()
{
node *root=new node(10);
root->left=new node(5);
root->right=new node(15);
root->right->left=new node(11);
root->right->right=new node(18);
cout<<"\nthe inorder before insertion "<<endl;
inorder(root);
root=insert(root,20);
cout<<"\nTeh inorder after insertion "<<endl;
inorder(root);
return 0;
}