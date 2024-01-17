#include<iostream>
#include<vector>
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


void insertTail(Node* &tail, int d)
{
    Node* temp1 = new Node(d);
    tail->next = temp1;
    tail=temp1;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* add_two_num(Node* &head,Node* &head1)
{
    int sum;
    Node* t1=head;
    Node* t2 = head1;
    Node* current;
    Node* dummy = new Node(-1);

    current=dummy;
    int carry=0;

    while(t1!=NULL || t2!=NULL)
    {
        int sum=carry;
        if(t1)
            sum+=t1->data;
        if(t2)
            sum+=t2->data;

        Node* NewNode=new Node(sum%10);
        carry=sum/10;

        current->next = NewNode;
        current = current->next;

        //traverse
        if(t1)  
            t1=t1->next;
        if(t2)
            t2=t2->next;

        //if carry is present assign it to new node
        if(carry)
        {
            Node* NewNode = new Node(carry);
            current->next = NewNode;
        }

    }
    // cout<<dummy->next;
    return dummy->next;
}

int main()
{
    //FIrst list
    Node* node1 = new Node(2);
    Node* head = node1;
    Node* tail=node1;

    insertTail(tail,4);
    insertTail(tail,3);

    //second list
    Node* node2 = new Node(5);
    Node* head1 = node2;
    Node* tail1=node2;

    insertTail(tail1,6);
    insertTail(tail1,4);

    cout<<"List 1 : "<<endl;
    print(head);
    cout<<"List 2 : "<<endl;
    print(head1);

    //Answer
    Node* sum = add_two_num(head,head1);
    sum=add_two_num(head,head1);
    cout<<"The result : ";
    print(sum);
    cout<<"## : "<<sum->data;



    return 0;
}