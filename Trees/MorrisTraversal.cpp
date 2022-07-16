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

void morrisPreOT(node* root)
{
    cout<<"\n Inorder Traversal in O(1) space is \n";
    if(root == NULL)
        {
            cout<<"No nodes in tree ";
            return;
        }
    node* cur = root;
    while(cur!=NULL)
    {
        if(cur->left==NULL)
        {
            cout<<cur->data<<" ";
            cur=cur->right;
        }
        else{
            node* pre = cur->left;
            while(pre->right!=NULL && pre->right!=cur)
            {
                pre = pre->right;
            }
            if(pre->right == NULL)
            {
                cout<<cur->data<<" ";
                pre->right = cur;
                cur = cur->left;
            }
            else{
                pre->right = NULL;
                cur = cur->right;
            }
        }
    }

}
void morrisIOT(node* root)
{
    cout<<"\n Preorder Traversal in O(1) space is \n";
    if(root == NULL)
        {
            cout<<"No nodes in tree ";
            return;
        }
    node* cur = root;
    while(cur!=NULL)
    {
        if(cur->left==NULL)
        {
            cout<<cur->data<<" ";
            cur=cur->right;
        }
        else{
            node* pre = cur->left;
            while(pre->right!=NULL && pre->right!=cur)
            {
                pre = pre->right;
            }
            if(pre->right == NULL)
            {
                pre->right = cur;
                cur = cur->left;
            }
            else{
                pre->right = NULL;
                cout<<cur->data<<" ";
                cur = cur->right;
            }
        }
    }

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
    morrisIOT(root);
    morrisPreOT(root);
}