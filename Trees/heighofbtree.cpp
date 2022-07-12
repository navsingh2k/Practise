#include<iostream>
using namespace std;
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
int height(node* root)
{
    if(root == NULL)
        return 0;
        
         // NOTE : IF TO PRINT NO. OF NODES
        //  IN MAX DEPTH THAN REMOVE THIS BASE CONDITION
        //  (DONT CHECK FOR LEAF NODE THAN)
    if(root->left == NULL && root->right==NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return 1+max(left,right);

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
    cout<<"\nHeight is "<<height(root);
}