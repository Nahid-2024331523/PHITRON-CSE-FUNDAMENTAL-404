#include<bits/stdc++.h>
using namespace std;
int Multiple(int a , int b , int c)
{
    for(int i=a ; i<=b ; i++){
        if(i%c==0){
            return i;
        }
    }
    return -1;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<Multiple(a,b,c);
    return 0;
}