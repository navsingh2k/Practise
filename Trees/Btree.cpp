#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        data = d;
        left=NULL;
        right=NULL;
    }
};
node* buildTree(){
    int data;
    cout<<"Enter data ";
    cin>>data;
    if(data == -1)
    {
        return NULL;
    }
    node* newNode = new node(data);
    cout<<"Enter left child for data "<<data<<endl;
    newNode->left = buildTree();
    cout<<"Enter right child for data "<<data<<endl;
    newNode->right = buildTree();
    return newNode;
}
void preOrder(node* root)
{
    // NLR
    if(root == NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(node* root)
{
    // LNR
    if(root == NULL)
        return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(node* root)
{
    // LRN
    if(root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node* root = NULL;
    root = buildTree();
    cout<<endl<<"Printing preOrder "<<endl;
    preOrder(root);
    cout<<endl<<"Printing inOrder "<<endl;
    inOrder(root);
    cout<<endl<<"Printing postOrder "<<endl;
    postOrder(root);
}