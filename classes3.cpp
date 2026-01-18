#include<iostream>
#include<string>
using namespace std;
class one 
{
public :
virtual void intro()  // virtual- anytime anybody
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
one *a; // a is pointer &  b,c are the identifires
two b;
three c;

a  = &b; //pointer a holding reference to the b class
//we cannot use a.intro()  bcz pointer doesn't support it ... instead we use following
a->intro();

a = &c;
a->intro();

return 0;
}