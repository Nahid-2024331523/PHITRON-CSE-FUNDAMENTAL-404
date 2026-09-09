//Full Name
#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    double gpa;
};
int main()
{
    student a,b;
    cin.getline(a.name,100);
    cin>>a.roll>>a.gpa;
    cin.ignore();
    cin.getline(b.name,100);
    cin>>b.roll>>b.gpa;
    cout<<a.name<<endl<<a.roll<<endl<<a.gpa<<endl;
    cout<<b.name<<endl<<b.roll<<endl<<b.gpa<<endl;
    return 0;
}