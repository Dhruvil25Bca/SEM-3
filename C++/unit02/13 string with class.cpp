#include <iostream.h>
#include <conio.h>
#include <string.h>
//using namespace std;
class str
{
    char n[100];

public:
    str()
    {
        cout << "\n Enter the string: ";
        cin >> n,100;
        cout << "\n default constructor";
    }
    str(char s[100])
    {
        strcpy(n,s);
        cout<<"\n name is "<<n,100;
    }
    str(str &s)
    {
        strcpy(n,s.n);
        cout<<"\n copy constructor: "<<n;
    }
};
int main()
{
    clrscr();
    str s;
    str s1("chirag");
    str s2(s);
    str s3(s1);
    getch();
    return 0;
}
