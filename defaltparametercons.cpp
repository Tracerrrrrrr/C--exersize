#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    complex(int ,int);
    void display(void)
    {
        cout<<"the value is:"<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(int a1,int b1)     //parameterised constructor
{
   a=a1;
   b=b1;
}
int main()
{
  complex o(2,3);
  o.display();
  return 0;
}