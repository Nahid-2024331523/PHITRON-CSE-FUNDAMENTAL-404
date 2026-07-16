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
int check_max(Node* head)
{
    int max=INT32_MIN;
    Node* tmp=head;
    while(tmp!=NULL){
        if(tmp->val>max){
            max=tmp->val;
        }
        tmp=tmp->next;
    }
    return max;
}
int check_min(Node* head)
{
    int min=INT32_MAX;
    Node* tmp=head;
    while(tmp!=NULL){
        if(tmp->val<min){
            min=tmp->val;
        }
        tmp=tmp->next;
    }
    return min;
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
    int max=check_max(head);
    int min=check_min(head);
    cout<<max-min;
    return 0;
}