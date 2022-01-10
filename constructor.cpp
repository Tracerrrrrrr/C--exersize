#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    //construtor is a member function is the same name of the class,it is invoked whenever an objext is created
    //it is used to initialize the objects of the class
    complex(void);                   //constructor declaration
    void printdata()
    {
        cout<<"your number is:  "<<a<<"+"<<b<<"i"<< endl;
    }
};
complex::complex(void)
{
    a=1;
    b=2;
}
int main()
{
  complex c;
  c.printdata();
    return 0;
}