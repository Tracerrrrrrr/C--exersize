#include<iostream>
using namespace std;
class mens
{
   
    int itemno[100];
    int itemprice[100];
    int counter;
    public:
    void initcounter(void) {counter=0;}
    void setprice(void);
    void getprice(void);
};
void mens::setprice(void)
{
    cout<<"enter your itmeno: "<<endl;
    cin>>itemno[counter];
    cout<<"enter your itemprice: "<<endl;
    cin>>itemprice[counter];
    counter++;
}
void mens::getprice(void)
{
    for(int i=0;i<counter;i++)
{
    cout<<"your item is:"<<itemno[i]<<"and price is:"<<itemprice[i]<<endl;
}
}
int main()
{
    mens m1,m2;
    m1.setprice();
    m1.initcounter();
    m1.getprice();

    m2.setprice();
    m2.initcounter();
    m2.getprice();
    return 0;
}
