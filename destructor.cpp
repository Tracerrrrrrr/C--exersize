#include<iostream>
using namespace std;
int count=0;
class num
{
    
    public:
    num(){
        count++;
        cout<<"this is a time constructor is called"<<count<<endl;
    }
    ~num()
    {
    cout<<"this is the time when my destructor is called"<<count<<endl;
    count--;
    }
};
int main()
{
    cout<<"we are inside our main function"<<endl;
     cout<<"Creating our first object n1"<<endl;
     num n1;
     {
     cout<<"Creating two more object"<<endl;
     num n2,n3;
     cout<<"exiting this block"<<endl;
     }
     cout<<"back to the main"<<endl;
    return 0;
}