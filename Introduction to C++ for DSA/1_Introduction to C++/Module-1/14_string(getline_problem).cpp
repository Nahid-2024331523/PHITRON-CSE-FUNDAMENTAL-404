//getline Problem
#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    char s[100];
    cin.getline(s,100);    //doesn't take input
    cout<<n<<endl<<s;
    return 0;
}