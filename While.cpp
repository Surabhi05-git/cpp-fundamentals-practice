#include<iostream>
using namespace std;
int main ()
{
    int n, count=0;
    cout<<"Enter a number that you want to count size : " <<endl;
    cin>>n;
    while(n!=0)
    
        n= n/10;
    
    count++;
cout<< "so your count is" <<count;
    
    return 0;
}