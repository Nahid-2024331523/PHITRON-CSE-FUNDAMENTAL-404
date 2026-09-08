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
    cout<<"L -> ";
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_backward(Node* tail)
{
    cout<<"R -> ";
    Node* tmp=tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
void insert_head(Node* &head , Node* &tail , int val)
{
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
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
void insert_any(Node* &head , int idx , int val)
{
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    Node* tmp=head;
    for(int i=1 ; i<idx ; i++){
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next->prev=newnode;
    tmp->next=newnode;
    newnode->prev=tmp;
}
int main()
{
    int size=0;
    Node* head=NULL;
    Node* tail=NULL;
    int t; cin>>t;
    while(t--){
        int in,val;
        cin>>in>>val;
        if(in>size){
            cout<<"Invalid"<<endl;
        }
        else{
            if(in==0){
                insert_head(head,tail,val);
            }
            else if(in==size){
                insert_tail(head,tail,val);
            }
            else{
                insert_any(head,in,val);
            }
            size++;
            print_forward(head);
            print_backward(tail);
        }
    }
    return 0;
}