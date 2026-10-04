#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    if(n==1){
        cout<<"000"<<s;
    }
    else if(n==2){
        cout<<"00"<<s;
    }
    else if(n==3){
        cout<<"0"<<s;
    }
    else if(n==0){
        cout<<"0000";
    }
    else{
        cout<<s;
    }
    return 0;
}