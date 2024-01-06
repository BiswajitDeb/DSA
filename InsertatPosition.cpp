#include<iostream>
using namespace std;

class Node{
    //data
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

//Insert  a new node at head
void insertHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

//Insert new node at tail
void insertTail(Node* &tail, int d)
{
    Node* temp1 = new Node(d);
    tail->next = temp1;
    tail=temp1;
}

//Insertat position
void insertatPosition(Node* &head, int position, int d){

    if(position==1){
        insertHead(head,d);
    }

    else
    {
        Node* temp = head;
        int count = 1;
        //Traverse
        while(count<position-1){
        temp = temp->next;
        count++;
    }
    //Create new node for d
    Node *isnert_data = new Node(d);
    isnert_data->next = temp->next;
    temp->next=isnert_data;
    }

}

//Print a node
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    //created first node
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;
    print(head);
    //cout<<endl<<"new"<<endl;
    insertHead(head,12);
    insertTail(tail,15);

    print(head);

    insertatPosition(head,3,35);
    print(head);

    insertatPosition(head,1,35);
    print(head);

    return 0;
}