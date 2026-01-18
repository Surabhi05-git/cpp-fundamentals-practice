#include<iostream>
#include<memory>

using namespace std;
int main()
{
shared_ptr <int>P1(new int(10));
shared_ptr <int>P2;
P2=P1;
cout<<P1.use_count()<<endl;
cout<<P1.use_count()<<endl;
return 0;
}