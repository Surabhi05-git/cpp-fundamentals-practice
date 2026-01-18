#include<iostream>
#include<string>
using namespace std;
template <typename S> 
void func(S surabhi)           // S - data type , surabhi - variable
{
 cout<< surabhi<<endl;
}

template <typename S , typename...xyz>
void func(S surabhi, xyz...abc)
{cout << surabhi<<endl; }
func(abc...);
int main()
{
 string myName = "vaishnavi";
 func(myName);
 return 0;
}