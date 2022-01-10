#include<iostream>
using namespace std;
class student
{
    int a,b;
    public:
    void get(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
    void put(void)
    {
        cout<<"the value of a is:"<<a<<"the value of b is :"<<b<<endl;
    }
};
int main()
{
    student o;
    o.get();
    o.put();
    return 0;
}