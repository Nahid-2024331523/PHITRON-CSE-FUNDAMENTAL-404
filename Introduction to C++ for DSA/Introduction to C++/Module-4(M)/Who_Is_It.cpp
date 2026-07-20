#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int one,two,three,m1,m2,m3;
        string s1,s2,s3;
        char a,b,c;
        cin>>one>>s1>>a>>m1;
        cin>>two>>s2>>b>>m2;
        cin>>three>>s3>>c>>m3;
        int mx=max(m1,max(m2,m3));
        if(m1==mx){
            cout<<one<<" "<<s1<<" "<<a<<" "<<m1<<endl;
        }
        else if(m2==mx){
            cout<<two<<" "<<s2<<" "<<b<<" "<<m2<<endl;
        }
        else if(m3==mx){
            cout<<three<<" "<<s3<<" "<<c<<" "<<m3<<endl;
        }
        else if(m1==m2){
            cout<<one<<" "<<s1<<" "<<a<<" "<<m1<<endl;
        }
        else if(m1==m3){
            cout<<one<<" "<<s1<<" "<<a<<" "<<m1<<endl;
        }
        else{
            cout<<two<<" "<<s2<<" "<<b<<" "<<m2<<endl;
        }
    }
    return 0;
}