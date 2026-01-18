#include<iostream>
using namespace std;
int main()
{
    int *surabhi;
    surabhi = new int [100];
    cout<<"memory space allocated";
    delete[] surabhi;
    return 0;
}