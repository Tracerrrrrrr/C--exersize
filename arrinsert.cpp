#include<iostream>
using namespace std;
int arrinsert(int arr[],int size,int i,int element,int index)
{
    for(i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[index]=element;
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
    int element=88;
    int index=2;
    int size=sizeof(arr)/sizeof(int);
    int i;
    display(arr,size,i);
    arrinsert(arr,size,i,element,index);
    size++;
     display(arr,size,i);
    return 0;
}