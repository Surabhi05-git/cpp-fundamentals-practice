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
    switch(oper)
    {
        case '+':
            cout<<n1+n2;
            break;
        case '-':
             cout<<n1-n2;
             break;
        case '*':
            cout<<n1*n2;
            break;
        case '/':
            cout<<n1/n2;
            break;
        default:
        cout<<"invalid oprator bro...";

    }
    return 0;
}