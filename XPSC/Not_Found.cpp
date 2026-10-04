#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool present[26]={false};
    for(char c : s){
        present[c-'a']=true;
    }
    int count=0;
    for(int i=0 ; i<26 ; i++){
        if(!present[i]){
            cout<<char(i+'a');
            count++;
            break;
        }
    }
    if(count==0){
        cout<<"None";
    }
    return 0;
}