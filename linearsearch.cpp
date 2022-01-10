#include<iostream>
using namespace std;
int linearsearch(int arr[],int i,int size,int element)
{
     for(i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,33,5};
    int element=33;
    int i; 
    int size=sizeof(arr)/sizeof(int);
    int result= linearsearch(arr,i,size,element);
    cout<<"the element found at index: "<<result<<endl;
}