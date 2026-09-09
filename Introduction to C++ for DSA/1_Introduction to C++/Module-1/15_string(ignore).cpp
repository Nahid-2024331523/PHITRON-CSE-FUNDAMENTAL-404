#include<iostream>
using namespace std;
int main()
{
    int n; cin>>n;
    cin.ignore();
    char s[100];
    cin.getline(s,100);
    cout<<n<<endl<<s;
    return 0;
}