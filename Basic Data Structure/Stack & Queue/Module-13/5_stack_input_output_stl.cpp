#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n; cin>>n;
    int i;
    for(i=0 ; i<n ; i++){
        int val;
        cin>>val;
        st.push(val);
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}