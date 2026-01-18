#include<iostream>
using namespace std;
int sakshi (){
    return 5;
}
    void ME()
    {
        cout<< "Hey\n";
    }
int main()
{
    int surabhi = 1;
    int (*devdare) =  &surabhi;
    cout<< devdare<<endl;

    int riddhi = sakshi();
    cout<<riddhi<<endl;

    void (*you)() =ME;
    (*you)();
    
    return 0;
}