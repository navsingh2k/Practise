#include<iostream>
using namespace std;
int length=0;
class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data = d;
        this->next = NULL;
    }
};
 void insertAtHead(node* &head,int d)
    {
        node* obj = new node(d);
        obj->next = head;
        head = obj;
    }
void insertAtTail(node* &head,int d)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    node* obj=new node(d);
    temp->next = obj;
}
void insertAtPos(node* &head,int pos,int d)
{
    int flag=1;
    if(pos==1)
    {
        insertAtHead(head,d);
    }
    else if(pos==length+1)
    {
        insertAtTail(head,d);
    }
    else if(pos<=length){
        node* newNode = new node(d);
        node* temp=head;
        while(flag!=pos-1)
        {
            temp = temp->next;
            flag++;
        }
        
        newNode->next=temp->next;
        temp->next=newNode;
    }
    else{
        cout<<"Position out of range ";
    }
}
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    // cout<<temp->data;
}
void lengthofLL(node* &head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        length++;
        temp = temp->next;
    }
}


int main()
{
    node* a = new node(10);
    node* head = a;
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    insertAtTail(head,60);
    cout<<"Before "<<endl;
    print(head);
    // cout<<endl<<"Khurapati "<<endl;
    // cout<<head->next->next->next->next->next->data;
    lengthofLL(head);
    cout<<"Length is "<<length;
    insertAtPos(head,8,11);
    cout<<endl<<"After "<<endl;
    print(head);
}