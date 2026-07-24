#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
// void insert_linklist_tail(Node* &head , Node* &tail , int val)
// {
//     Node* newnode=new Node(val);
//     if(head==NULL){
//     head=newnode;
//     tail=newnode;
//     return;
// }
//     tail->next=newnode;
//     tail=newnode;
// }
void print_linklist(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void insert_head(Node* &head , int val)
{
    Node* newnode=new Node(val);
    newnode->next=head;
    head=newnode;
}
void insert_tail(Node* &head , int val)
{
    Node* newnode=new Node(val);
    Node* tmp=head;
    if(head==NULL){
        head=newnode;
        return;
    }
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newnode;
}
void delete_any(Node* &head , int idx)
{
    if(idx==0){
        Node* newnode=head;
        head=head->next;
        delete newnode;
        return;    
    }
    Node* tmp=head;
    for(int i=1 ; i<idx ; i++){
        tmp=tmp->next;
    }
    Node* newnode=tmp->next;
    tmp->next=tmp->next->next;
    delete newnode;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int q; cin>>q;
    int count=0;
    while(q--){
        int x,v;
        cin>>x>>v;
        if(x==0){
            insert_head(head,v);
            print_linklist(head);
            count++;
        }
        else if(x==1){
            insert_tail(head,v);
            print_linklist(head);
            count++;
        }
        else{
            if(v<=count-1){
                delete_any(head,v);
                count--;
            }
            print_linklist(head);
        }
    }   
    return 0;
}