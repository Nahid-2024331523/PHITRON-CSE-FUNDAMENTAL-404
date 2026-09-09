#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int cls;
    string sec;
    int id;
    int n1;
    int n2;
};
bool cmp(student l , student r)
{
    if(l.n2==r.n2){
        if(l.n1==r.n1){
            if(l.id<r.id){
                return true;
            }
            else{
                return false;
            }
        }
        else if(l.n1>r.n1){
            return true;
        }
        else{
            return false;
        }
    }
    else if(l.n2>r.n2){
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
        cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].id>>a[i].n1>>a[i].n2;
    }
    sort(a,a+n,cmp);
    for(i=0 ; i<n ; i++){
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].id<<" "<<a[i].n1<<" "<<a[i].n2<<endl;
    }
}