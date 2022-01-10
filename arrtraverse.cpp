#include<iostream>
using namespace std;
void display(int arr[],int size,int i)
{
    for(i=0;i<size;i++)
    {
        cout<<"array is :"<<arr[i]<<endl;   // array traversal
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int i;
    int size=sizeof(arr)/sizeof(int);
    display(arr,size,i);
    return 0;
}