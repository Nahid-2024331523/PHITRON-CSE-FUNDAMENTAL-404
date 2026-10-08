#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n; cin>>n;
    long long a[n];
    long long i;
    for(i=0 ; i<n ; i++){
        cin>>a[i];
    }
    long long sum=0;
    for(i=0 ; i<n ; i++){
        sum+=a[i];
    }
    sort(a,a+n);
    long long num;
    for(i=0 ; i<n ; i++){
        if(a[i]%2!=0){
            num=a[i];
            break;
        }
    }
    if(sum%2!=0){
        sum-=num;
    }
    cout<<sum;
    return 0;
}