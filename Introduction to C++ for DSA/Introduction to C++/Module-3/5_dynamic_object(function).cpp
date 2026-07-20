//Dynamic Object Function
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
student* fun()
{
    student* nahid=new student(23,1,3.43);
    return nahid;
}
int main()
{
    student* obj=fun();
    cout<<obj->roll<<" "<<obj->sem<<" "<<obj->gpa<<endl;
    return 0;
}