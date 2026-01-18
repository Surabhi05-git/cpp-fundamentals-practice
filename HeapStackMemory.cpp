#include<iostream>
using namespace std;
int main()
{
    //stack
    int surabhi = 100;
    int chiu = 300;
    //heap
    int *sanjana = new int; //when we use "new" keyword, we also have to use "delete" keyword
    *sanjana = 200;

    cout<<&surabhi<<endl;
    cout<<&chiu<<endl;

    cout<<&sanjana;

    
    delete sanjana;
    
    return 0;
}