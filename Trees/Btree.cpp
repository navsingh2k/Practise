#include<iostream>
#include<queue>
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

void levelOrder(node* root)
{
    if(root == NULL)
        return;
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* front = q.front();
        cout<<front->data<<" ";
        q.pop();
        if(front->left!=NULL)
        {
            q.push(front->left);
        }
        if(front->right!=NULL)
        {
            q.push(front->right);
        }
    }
}
void levelOrderS(node* root)
{
    int count =0;
    if(root == NULL)
        return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1)
    {
       node* front = q.front();
       q.pop();
       if(front == NULL)
       {
        q.push(NULL);
        cout<<endl;
        count++;
       }
       else{
         if(front->left!=NULL)
        {
            q.push(front->left);
        }
        if(front->right!=NULL)
        {
            q.push(front->right);
        }
        cout<<front->data<<" ";
       }
    }
    cout<<" h is "<<count;
}
int main()
{
    node* root = NULL;

    // build tree 10 5 3 -1 -1 7 6 -1 -1 -1 11 -1 -1
            //           10
            //        /     \
            //        5       11 
            //     /    \    /  \
            //    3      7  -1  -1
            //   / \   /  \
            // -1  -1  6  -1      
    root = buildTree();

    cout<<endl<<"Printing preOrder "<<endl;
    preOrder(root);
    cout<<endl<<"Printing inOrder "<<endl;
    inOrder(root);
    cout<<endl<<"Printing postOrder "<<endl;
    postOrder(root);
    cout<<endl<<"Printing levelOrder "<<endl;
    levelOrderS(root);
}