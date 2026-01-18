#include<iostream>
using namespace std;
int main()
{
    int surabhi=400000;
    int *sanjana= &surabhi;
    cout<<*sanjana<<endl;
      cout<<sanjana<<endl;
      *sanjana= 500000;
      cout<<sanjana<<endl;
      cout<<*sanjana<<endl;
      cout<<surabhi<<endl;
      int *riddhi= sanjana;
      int *kajal= sanjana;
      cout<<*riddhi<<endl;
      cout<<*kajal<<endl;
      
return 0;
}