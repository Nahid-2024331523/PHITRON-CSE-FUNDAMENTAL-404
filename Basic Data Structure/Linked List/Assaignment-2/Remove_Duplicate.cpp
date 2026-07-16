// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node* next;

//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void insert_linklist_tail(Node* &head , Node* &tail , int val)
// {
//     Node* newnode=new Node(val);
//     if(head==NULL){
//         head=newnode;
//         tail=newnode;
//         return;
//     }
//     tail->next=newnode;
//     tail=newnode;
// }
// void print_linklist(Node* head)
// {
//     set<int> st;
//     Node* tmp=head;
//     while(tmp!=NULL){
//         if(st.find(tmp->val)==st.end()){
//             cout<<tmp->val<<" ";
//             st.insert(tmp->val);
//         }
//         tmp=tmp->next;
//     }
// }
// int main()
// {
//     Node* head=NULL;
//     Node* tail=NULL;
//     int v;
//     while(true){
//         cin>>v;
//         if(v==-1){
//             break;
//         }
//         insert_linklist_tail(head,tail,v);
//     }
//     print_linklist(head);
//     return 0;
// }



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
void print_linklist(Node* head)
{
    set<int> st;
    Node* tmp=head;
    while(tmp!=NULL){
        if(st.find(tmp->val)==st.end()){
            cout<<tmp->val<<" ";
            st.insert(tmp->val);
        }
        tmp=tmp->next;
    }
}
void remove_duplicate(Node* head)
{
    Node* t1=head;
    while(t1!=NULL){
        Node* t2=t1;
        while(t2->next!=NULL){
            if(t2->next->val==t1->val){
                Node* deletenode=t2->next;
                t2->next=t2->next->next;
                delete deletenode;
            }
            else{
                t2=t2->next;
            }
        }
        t1=t1->next;
    }
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int v;
    while(true){
        cin>>v;
        if(v==-1){
            break;
        }
        insert_linklist_tail(head,tail,v);
    }
    remove_duplicate(head);
    print_linklist(head);
    return 0;
}