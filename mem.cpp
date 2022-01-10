#include<iostream>
using namespace std;
class barat
{
    int itmid[100];
    int itmv[100];
    int counter;
    public:
    int chk_counter(){counter=0;}
    void set(void);
    void get(void);
};
void barat::set(void)
{
    cout<<"Enter the itemid and itemno."<<endl;
    cin>>itmid[counter];
    cin>>itmv[counter];
    counter++;
}
void barat::get(void)
{
    for(int i=0;i<counter;i++)
    {
        cout<<"your item id is:"<<itmid[i]<<"and your itmeno is:"<<itmv[i]<<endl;
    }
}
int main()
{
   barat m;
   m.set();
   m.get();
}