#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int cls;
    string sec;
    int n1;
    int n2;
    int n3;
};
bool cmp(student l , student r)
{
    if((l.n2+l.n3)==(r.n2+r.n3)){
        if(l.n1<r.n1){
            return true;
        }
        else{
            return false;
        }
    }
    else if((l.n2+l.n3)>(r.n2+r.n3)){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n; cin>>n;
    student a[n];
    int i;
    for(i=0 ; i<n ; i++){
        cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].n1>>a[i].n2>>a[i].n3;
    }
    sort(a,a+n,cmp);
    for(i=0 ; i<n ; i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].n1<<" "<<a[i].n2<<" "<<a[i].n3<<endl;
    }
}