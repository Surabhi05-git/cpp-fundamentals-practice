#include<iostream>
#include <memory>
using namespace std;
int main ()
{
    unique_ptr<int>p1(new int(10));
    unique_ptr<int>p2;
    cout<<*p1<<endl;
    cout<<&p1;
return 0;
}