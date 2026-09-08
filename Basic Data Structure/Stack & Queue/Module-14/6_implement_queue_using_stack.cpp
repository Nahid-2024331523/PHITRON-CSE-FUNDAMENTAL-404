#include<bits/stdc++.h>
using namespace std;
class MyQueue
{
    public:
    stack<int> s;
    void push(int x)
    {
        s.push(x);
    }
    int pop()
    {
        stack<int> s2;
        int val;
        while(!s.empty()){
            val=s.top();
            s.pop();
            if(s.empty()==true){
                break;
            }
            s2.push(val);
        }
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return val;
    }
    int peek()
    {
        stack<int> s2;
        int val;
        while(!s.empty()){
            val=s.top();
            s.pop();
            s2.push(val);
            }
        while(!s2.empty()){
            s.push(s2.top());
            s2.pop();
        }
        return val;
    }
    bool empty()
    {
        return s.empty();
    }
};
int main()
{
    MyQueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.peek()<<endl;
    cout<<q.empty();
    return 0;
}