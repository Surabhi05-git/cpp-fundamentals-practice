#include<iostream>
#include<string>
using namespace std;
class one 
{
public :
void intro() 
{cout<<"I am one\n";}
};
class two
{
    public :
    void intro()
    {cout<<"I am two \n";}
};
class three
{
    public :
    void intro()
    {cout<<"I am three \n";}
};

int main()
{
one a; // a,b,c are the identifires
two b;
three c;

a.intro();
b.intro();
c.intro();
return 0;
}