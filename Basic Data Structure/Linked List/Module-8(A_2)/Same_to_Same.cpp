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
int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    int v1;
    while(1){
        cin>>v1;
        if(v1==-1){
            break;
        }
        insert_linklist_tail(head1,tail1,v1);
    }
    int v2;
    while(1){
        cin>>v2;
        if(v2==-1){
            break;
        }
        insert_linklist_tail(head2,tail2,v2);
    }
    Node* t1=head1;
    Node* t2=head2;
    bool flag=false;
    while(t1!=NULL && t2!=NULL){
        if(t1->val!=t2->val){
            flag=true;
            break;
        }
        t1=t1->next;
        t2=t2->next;
    }
    if(t1!=NULL || t2!=NULL){
        flag=true;
    }
    if(flag==false) cout<<"YES";
    else cout<<"NO";
    return 0;
}