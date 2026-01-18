#include<iostream>
using namespace std;
int main ()
{
    int r,c;
    cout<<"entter number of rows : \n";
    cin>>r;
    cout<<"entter number of columns : \n";
    cin>>c;

    for(int i=1; i<=r; i++)
        {
            for(int i=1; i<=c; i++)
                {
                    cout<<"*";
                }
                cout<<endl;
        }
        return 0;
    }