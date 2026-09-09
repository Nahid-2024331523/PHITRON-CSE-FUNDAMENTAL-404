#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int cls;
    string sec;
    int id;
};
int main()
{
    int n; cin>>n;
    student a[n];
    int i;
    for(i=0 ; i<n ; i++){
        cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].id;
    }
    for(i=0 ; i<n/2 ; i++){
        swap(a[i].sec,a[n-i-1].sec);
    }
    for(i=0 ; i<n ; i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<endl;
    }
    return 0;
}