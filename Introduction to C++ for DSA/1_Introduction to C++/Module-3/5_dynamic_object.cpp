//Basic Declaration
#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int roll;
    int sem;
    double gpa;
    student(int roll , int sem , double gpa)
    {
        (*this).roll=roll;
        (*this).sem=sem;
        (*this).gpa=gpa;
    }
};
int main()
{
    student* nahid=new student(23,1,3.43);
    cout<<nahid->roll<<" "<<nahid->sem<<" "<<nahid->gpa<<endl;
    return 0;
}