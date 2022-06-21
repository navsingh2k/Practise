#include<iostream>
using namespace std;
class Node {

    //Data Member are below:
    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this->data  = data;
        this->next = NULL;
    }

};

void insertAtHead(Node* &head, int d) {
        //step 1: create new node
        Node* newNode = new Node(d);
        //step2: set next ptr to head node
        newNode->next = head;
        //step3: head update;
        head = newNode;
}

void insertAtTail(Node* &tail, int d) {
        //step 1: cration of Node
        Node* newNode = new Node(d);
        //step2: 
        tail->next = newNode;
        //step3: head update;
        tail = newNode;
}

void insertAtPosition(Node* &head, int pos, int d) {
    //TODO: tail updation, while inserting node at the end
    //TODO: validate that position should 
    //be atmax 1 more than current Lenght of LL
    if(pos == 1) {
        insertAtHead(head,d);
    }
    else {
        //Step1: cration of New Node
        Node* newNode = new Node(d);

        //step2: 
        Node* prev = head;
        int t = pos-2;
        while(t--)
        {
            prev= prev->next;
        }

        //step3: connections update
        newNode->next = prev->next;
        prev->next = newNode;
    }
}

void traverse(Node* &head) {
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp ->next;
    }
    cout << endl;
}


void deleteNode(Node* &head, int target, int pos) {

    //empty list
    if(head == NULL)
        return;

    Node* temp = head;
    Node* prev = NULL;
    if(target == temp->data && pos == 1){
        head  = head ->next;
        temp -> next = NULL;
        delete temp;
    }
    else{

        while(temp != NULL && temp->data != target) {
            prev = temp;
            temp = temp->next;
        }
        //here we are assuiming that we have found the element

        if(temp == NULL)
            {
                cout << "NOde node found" << endl;
                return;
            }
        prev -> next = temp->next;
        temp ->next = NULL;
        delete temp;

    }

}
// Node* reverseLL(Node* &head)
// {
//     Node* current = head;
//     Node* forward = current->next;
    
// }
void midNode(Node* &head)
{
    
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL)
    {
       
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<"Mid Node is "<<slow->data;

}
int getLength(Node* &head) {
    Node* temp = head;
    int len = 0;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    } return len;
}
Node* reversell(Node* &head)
{
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL)
    {
    Node*  Next = temp->next;
    temp->next = prev;
    prev = temp;
    temp = Next;
    }
 return prev;
}
int main()
{
    Node* b = new Node(3);
    Node* head = b;
    Node* tail = b;

    insertAtTail(tail,5);
    insertAtTail(tail,7);
    insertAtTail(tail,9);
    insertAtTail(tail,11);
    insertAtTail(tail,13);
    insertAtTail(tail,15);
    traverse(head);
    head = reversell(head);
    traverse(head);
    
}