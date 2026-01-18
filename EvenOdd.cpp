#include <iostream>
using namespace std;
int main ()
{
    int N;
    cout<<" Enter Any Number : " <<endl;
    cin>>N;
    if( N % 2 == 0)
    {
        cout<<"The number is even" <<endl;

    }
    else 
    {
        cout<<"The number is odd ";
    }

    return 0;
}