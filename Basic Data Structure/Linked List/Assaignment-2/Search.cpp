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
    int t; cin>>t;
    while(t--){
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
        int num; cin>>num;
        Node* tmp=head;
        int flag=0,i=0;
        while(tmp!=NULL){
            if(tmp->val==num){
                cout<<i<<endl;
                flag=1;
                break;
            }
            i++;
            tmp=tmp->next;
        }
        if(flag==0){
            cout<<"-1"<<endl;
        }
    }
    return 0;
}