#include<iostream>
#include<string>
using namespace std;

class devdare{
    int MIS_no = 11;        //private
    string D = "Navnath";     //private - we cannot change it

  public :
  string name = "surabhi";
  void home ()
  { cout<<"ur home is ready "<<name<<endl;}
};

int main ()
{
    devdare siddhi;
    siddhi.name = "zinga";
    siddhi.home();
    //siddhi.D = "Eknath"; -  it cannot change beacause its a private class member !


    return 0;
}
