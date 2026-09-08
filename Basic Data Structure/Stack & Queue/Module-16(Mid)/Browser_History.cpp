#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string s;
    Node* next;
    Node* prev;
    Node(string s)
    {
        this->s=s;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_tail(Node* &head, Node* &tail , string s)
{
    Node* newnode=new Node(s);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void visit(Node* &work , Node* head , string st)
{
    Node* tmp=head;
    while(tmp!=NULL){
        if(tmp->s==st){
            work=tmp;
            cout<<work->s<<endl;
            return;
        }
        tmp=tmp->next;
    }
    cout<<"Not Available"<<endl;
}
void go_prev(Node* &work)
{
    if(work->prev!=NULL){
        work=work->prev;
        cout<<work->s<<endl;
    }
    else{
        cout<<"Not Available"<<endl;
    }
}
void go_next(Node* &work)
{
    if(work->next!=NULL){
        work=work->next;
        cout<<work->s<<endl;
    }
    else{
        cout<<"Not Available"<<endl;
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    string st;
    while(1){
        cin>>st;
        if(st=="end"){
            break;
        }
        insert_tail(head,tail,st);
    }
    Node* work=head;
    int t; cin>>t;
    while(t--){
        string S;
        cin>>S;
        if(S=="prev"){
            go_prev(work);
        }
        else if(S=="next"){
            go_next(work);
        }
        else if(S=="visit"){
            cin>>S;
            visit(work,head,S);
        }
    }
    return 0;
}