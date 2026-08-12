#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print_forward(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void insert_tail(Node* &head, Node* &tail , int val)
{
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void reverse_linked_list(Node* &head , Node* &tail)
{
    for(Node *i=head,*j=tail ; i!=j && i->prev!=j ; i=i->next,j=j->prev){
        swap(i->val,j->val);
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int v;
    while(1){
        cin>>v;
        if(v==-1){
            break;
        }
        insert_tail(head,tail,v);
    }
    print_forward(head);
    cout<<endl;
    reverse_linked_list(head,tail);
    print_forward(head);
    return 0;
}