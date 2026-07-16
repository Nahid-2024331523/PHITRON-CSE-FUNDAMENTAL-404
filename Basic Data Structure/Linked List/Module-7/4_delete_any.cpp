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
void insert_linklist_tail(Node* &head , Node* &tail , int val)
{
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void delete_any(Node* &head , int idx)
{
    Node* tmp=head;
    for(int i=1 ; i<idx ; i++){
        tmp=tmp->next;
    }
    Node* newnode=tmp->next;
    tmp->next=tmp->next->next;
    delete newnode;
}
void print_linklist(Node* &head)
{
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
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
        insert_linklist_tail(head,tail,v);
    }
    cout<<"before delete tail="<<tail->val<<endl;
    delete_any(head,3);
    print_linklist(head);
    cout<<endl<<"after delete tail="<<tail->val;
    return 0;
}