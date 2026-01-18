#include<iostream>
using namespace std;
int main()
{
    int *surabhi;

    try 
    {
        surabhi = new int [100];
        cout<<"memory space allocated\n";
    } 

    catch(...)
    {
        cout<<"failed in allocating memory";
    }

    delete [] surabhi; // [] - it indicates entire space in surabhi
return 0;

}