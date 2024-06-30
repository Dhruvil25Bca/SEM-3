#include <iostream>
#include <conio.h>
using namespace std;
class student
{   
    int m[5],i,rn,sum=0;
    float per=0;
    char name[20];
    
    public:
    void get()
    {
        cout<<"\n Enter roll No: ";
        cin>>rn;
        cout<<"\n Enter name: ";
        cin>>name;
        for(i=0;i<5;i++)
        {
            cout<<"\n Enter marks m["<<i<<"]: "<<endl;
            cin>>m[i];
        }
    }
    void dis()
    {
        cout<<"\n roll No: "<<rn;
        cout<<"\n name: "<<name;
        for(i=0;i<5;i++)
        {
            cout<<"\n marks m["<<i+1<<"]: "<<m[i]<<endl;
        }
        cout<<"\n Total marks: "<<sum<<endl;
        cout<<"\n percentage: "<<per<<endl;
    }
    void total()
    {
        for(i=0;i<5;i++)
        {
            sum+=m[i];
        }
        per=sum/5;
    }
};
int main()
{
    int i;
    student s[2];
    clrscr();
    for(i=0;i<2;i++)
    {
        s[i].get();
        s[i].total();
        s[i].dis();  
    }
    return 0;
}
