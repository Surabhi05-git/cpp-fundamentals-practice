#include<iostream>
using namespace std;
int main()
{
   unsigned int x = 6;
     unsigned int Y = 7;
    unsigned int z= x&Y;
    cout<<z<<endl; 

    unsigned int k =Y>>1; // left shift
    unsigned int s = Y<<1; // right shift
    cout<<k<<endl;
    cout<<s;
}