#include<iostream>
using namespace std;
class student{
    int a,b;
    public:
    student(int a1,int b1)
    {
      a=a1;
      b=b1;
    }

    student(int a2)
    {
      a=a2;
      b=0;
    }
    void print(void)
    {
      cout<<a<<"+"<<b<<"i"<<endl;
    }
    
};
int main()
{
    student o(2,3);
    student p(3);
    o.print();
    p.print();
    return 0;
}