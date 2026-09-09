//Mwmory Delete Solve
#include<bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int *x=new int;
    *x=10;
    p=x;
    cout<<"fun-> "<<*p<<endl;
    return;
}
int main()
{
    fun();
    cout<<"main-> "<<*p<<endl;    
    return 0;
}