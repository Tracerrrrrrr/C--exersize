#include<iostream>
using namespace std;
class number
{
    int a;
    public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
    }
    number(number &obj)
    {
        cout<<"copy constructor called"<<endl;
        a=obj.a;
    }
    void display(){
           cout<<"the value of a is:"<<a<<endl;
         }
};
int main()
{
    number o(23),y,z(55);
    z.display();
     number z1(o);
     z1.display();
    return 0;
}