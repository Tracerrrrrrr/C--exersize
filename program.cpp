#include <iostream>
using namespace std;
int main()
{
    int i, j,n;
    cout<<"Enter the order to print:"<<n<<endl;
    for (i = 0; i < n;i++)
    {
        for(j=1;j<j-i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
        return 0;
}