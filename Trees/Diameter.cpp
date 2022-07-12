
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
        int left = height(root->left);
        int right = height(root->right);
        return max(left,right)+1;
        
    }
    int diameter(node* root)
    {
        if(root == NULL)
            return 0;
        int choice1 = diameter(root->left);
        int choice2 = diameter(root->right);
        int choice3 = height(root->left)+height(root->right)+1;
        return max(choice3,max(choice1,choice2));
    }
    int diameterOfBinaryTree(node* root) {
        if(root == NULL)
            return 0;
        return diameter(root)-1;
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
    cout<<"\nDiameter is "<<diameterOfBinaryTree(root);
}