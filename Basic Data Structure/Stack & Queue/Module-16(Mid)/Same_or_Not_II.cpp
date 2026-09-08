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
class mystack
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    void push(int val)
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
    void pop()
    {
        Node* deletenode=tail;
        tail=tail->prev;
        delete deletenode;
        if(tail==NULL){
            head=NULL;
            return;
        }
        tail->next=NULL;
    }
    int top()
    {
        return tail->val;
    }
    bool empty()
    {
        return head==NULL;
    }
};
class myqueue
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    void push(int val)
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
    void pop()
    {
        Node* deletenode=head;
        head=head->next;
        delete deletenode;
        if(head==NULL){
            tail=NULL;
            return;
        }
        head->prev=NULL;
    }
    int front()
    {
        return head->val;
    }
    bool empty()
    {
        return head==NULL;
    }
};
int main()
{
    mystack s;
    int n,m; cin>>n>>m;
    int i;
    for(i=0 ; i<n ; i++){
        int v; cin>>v;
        s.push(v);
    }
    myqueue q;
    for(i=0 ; i<m ; i++){
        int v; cin>>v;
        q.push(v);
    }
    int a,b;
    int flag=1;
    while(!s.empty() && !q.empty()){
        a=s.top();
        b=q.front();
        s.pop();
        q.pop();
        if(a!=b){
            flag=0;
            break;
        }
        else if(s.empty()==true && q.empty()==false){
            flag=0;
            break;
        }
        else if(q.empty()==true && s.empty()==false){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}