#include<iostream>
using namespace std;

struct Information{
    const int Roll_number;
    const char *name; // we are not applying constant for name,we are applying const to pointer. so we can change name and email value 
    const char *email;
    int course_count;
};

int main()
{
Information surabhi = {22, "surabhi" ,"surabhi@gmail.com" , 2};
Information riddhi = {17, "riddhi","riddhi@gmail.com", 4};
Information sanjana = {22, "sanjana","sanjana@gmail.com", 2};

cout<<surabhi.email<<endl;
printf("%d", sanjana.course_count );
cout<<endl;


Information *suu = &surabhi;
suu->name;
cout<<suu <<endl;
cout<<&suu <<endl;
suu->course_count = 12;
cout<<surabhi.course_count <<endl;
return 0;
}