#include<iostream>
#include<string>
using namespace std;
int main()
{
    string first_name ;
    string last_name;
    cout<<"enter your first name :"<<endl;
    getline( cin, first_name);
cout<<"enter your last name : "<<endl;
getline(cin, last_name);
cout<<" so your full name is "<<first_name<<" "<<last_name<<endl;
return 0;
}