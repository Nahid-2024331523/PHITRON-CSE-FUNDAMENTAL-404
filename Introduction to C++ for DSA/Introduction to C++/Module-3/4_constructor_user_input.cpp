//Input from User
#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int sem;
    double gpa;
    student(int r , int s , double g)
    {
        roll=r;
        sem=s;
        gpa=g;
    }
};
int main()
{
    int r;
    int s;
    double g;
    cin>>r>>s>>g;
    student nahid(r,s,g);
    cout<<nahid.roll<<" "<<nahid.sem<<" "<<nahid.gpa<<endl;
    return 0;
}