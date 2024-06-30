#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int sub1,sub2,sub3,total,rollno;
    float pr;
    char name[100];
    clrscr();
    cout<<endl<<"enter the rollno of student:";
    cin>>rollno;
    cout<<endl<<"enter the name of student:";
    cin>>name;
    cout<<endl<<"enter value of subject 01:";
    cin>>sub1;
    cout<<endl<<"enter value of subject 02:";
    cin>>sub2;
    cout<<endl<<"enter value of subject 03:";
    cin>>sub3;
    total=sub1+sub2+sub3;
    pr=total/3;
    cout<<endl<<"student name is "<<name;

    cout<<endl<<"student rollno is "<<rollno;
    cout<<endl<<"marks of subject 01 is"<<sub1;
    cout<<endl<<"marks of subject 02 is"<<sub2;
    cout<<endl<<"marks of subject 03 is"<<sub3;
    cout<<endl<<"total of 3 subjects:"<<total;
    cout<<endl<<"percentage is"<<pr;
    if(sub1>33 && sub2>33 && sub3>33)
    {
      if(pr>=70)
     {
        cout<<endl<<"grade is A";
     }
     else if(pr>=60)
     {
        cout<<endl<<"grade is B";
     }
    else if(pr>=50)
     {
        cout<<endl<<"grade is C";
     }
    else if(pr<=35) 
    {
        cout<<endl<<"PASS";
    }
    }
    else
    {
        cout<<endl<<"FAIL";
    }
    return 0;
}
