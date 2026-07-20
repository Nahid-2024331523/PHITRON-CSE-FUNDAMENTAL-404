#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,t;
        cin>>n>>t;
        int a[n];
        int i,j,k;
        for(i=0 ; i<n ; i++){
            cin>>a[i];
        }
        int count=0;
        for(i=0 ; i<n-2 ; i++){
            for(j=i+1 ; j<n-1 ; j++){
                for(k=j+1 ; k<n ; k++){
                    if(a[i]+a[j]+a[k]==t){
                        count=1;
                        break;
                    }
                }
            }
        }
        if(count==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}