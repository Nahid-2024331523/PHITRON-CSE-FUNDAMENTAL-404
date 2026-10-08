#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int num; cin>>num;
        string s1,s2;
        cin>>s1>>s2;
        int n=s1.size();
        int i;
        for(i=0 ; i<n ; i++){
            if(s1[i]=='B'){
                s1[i]='G';
            }
        }
        for(i=0 ; i<n ; i++){
            if(s2[i]=='B'){
                s2[i]='G';
            }
        }
        int count=0;
        for(i=0 ; i<n ; i++){
            if(s1[i]==s2[i]){
                count++;
            }
        }
        if(count==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}