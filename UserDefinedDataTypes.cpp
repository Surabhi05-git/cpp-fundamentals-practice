#include<iostream>
using namespace std;
class Project_Members
{
    public:
    string name;
    int RollNo;
    float cgpa;
};
int main ()
    {
            Project_Members P1;
            P1.name = "surabhi";
            P1.RollNo = 22;
            P1.cgpa= 8.2;
            Project_Members P2;
            P2.name = "sanjana";
            P2.RollNo = 29;
            P2.cgpa= 8.22;
            Project_Members P3;
            P3.name = "Riddhi";
            P3.RollNo = 17;
            P3.cgpa= 8.2;
                 Project_Members P4;
            P4.name = "sakshi";
            P4.RollNo = 32;
            P4.cgpa= 8.2;

            cout<<P1.name <<" " <<P1.cgpa <<endl;
            return 0;
    }