#include<iostream>
using namespace std;
    int lifeUp()
    {
        static int life = 3;
        return life = ++life;  //life++ ; //life + 1;
    }
int main()
{

    int life = 1; 
    cout<<"Your starting game life is : "<<life<<endl;


    life = lifeUp();
    cout<<"Your starting game life is : "<<life<<endl;
    life = lifeUp();
    cout<<"Your starting game life is : "<<life<<endl; 
    

    cout<< "  see this : " << life <<endl;

    return 0;
}