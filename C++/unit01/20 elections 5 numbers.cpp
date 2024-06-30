#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int count[5]={0},vote,spoilt=0,i;
    char option;
    while(option!='n')
    {
        cout<<"\n Election:5 candidates\n\n vote for candidate no[0-5]: ";
        cin>>vote;
        switch(vote)
        {
            case 1:
            count[0]++;
            break;
            case 2:
            count[1]++;
            break;
            case 3:
            count[2]++;
            break;
            case 4:
            count[3]++;
            break;
            case 5:
            count[4]++;
            break;
            default:
            cout<<"\n spoilt ballot!";
            spoilt++;
        }
        cout<<"\n do want vote again ?[y/n]: ";
        cin>>option;
    }
    clrscr();
    for(i=0;i<5;i++)
    {
        cout<<endl<<"candidate["<<i+1<<"]: "<<count[i];
    }
    cout<<"\n spoilt votes: "<<spoilt;

    return 0;
}
