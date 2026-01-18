#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n1,n2;
    char oper;
    cout<<"Enter first number = " <<endl;
    cin>>n1;
    cout<<"Enter operator = " <<endl;
    cin>>oper;
   cout<<"Enter second number = " <<endl;
    cin>>n2;
    if(oper=='+') 
        cout<<n1+n2;
    if(oper=='-') 
        cout<<n1-n2;
    if(oper=='*') 
        cout<<n1*n2;
    if(oper=='/') 
        cout<<n1/n2;
return 0;
}