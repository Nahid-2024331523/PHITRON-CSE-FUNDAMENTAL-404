#include<bits/stdc++.h>
using namespace std;
class MyStack
    {
        public:
        queue<int> q;
        void push(int v)
        {
            q.push(v);
        }
        int pop()
        {
            queue<int> q2;
            int val;
            while(!q.empty()){
                val=q.front();
                q.pop();
                if(q.empty()==true){
                    break;
                }
                q2.push(val);
            }
            q=q2;
            return val;
        }
        int top()
        {
           return q.back(); 
        }
        bool empty()
        {
            return q.empty();
        }
    };
int main()
{
    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.empty();
    return 0;
}