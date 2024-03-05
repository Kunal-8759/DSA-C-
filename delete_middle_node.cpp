#include<iostream>
using namespace std;
struct Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node *temp){
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
void delete_middle_node(Node* head){
    Node *slow=head;
    Node *fast=head;
    while(fast->next->next!=NULL && fast->next->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=slow->next->next;
    
}
int main(){
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    

    a->next=b;
    b->next=c;
    c->next=d;
  

    Node* head=a;
    display(head);
    delete_middle_node(head);
    display(head);
}