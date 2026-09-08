#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    long long a[n];
    int i,j;
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    long long total=0;
    for(i=0 ; i<n ; i++){
        total+=a[i];
    }
    long long sum1=0;
    for(i=0 ; i<n ; i++){
        sum1+=a[i];
        long long sum2=total-sum1+a[i];
        if(sum1==sum2){
            cout<<sum1<<" "<<i+1;
            return 0;
        }
    }
    cout<<"UNSTABLE";
    return 0;
}