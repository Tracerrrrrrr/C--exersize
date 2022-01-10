#include<iostream>
using namespace std;
int arrinsert(int arr[],int size,int i,int index)
{
    for(i=index;i<size;i++)
    {
        arr[i]=arr[i+1];

    }
}
void display(int arr[],int size,int i)
{
  for(i=0;i<size;i++)
  {
      cout<<"the array is :"<<arr[i]<<endl;
  }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int index=2;
    int size=sizeof(arr)/sizeof(int);
    int i;
    display(arr,size,i);
    arrinsert(arr,size,i,index);
    size--;
     display(arr,size,i);
    return 0;
}