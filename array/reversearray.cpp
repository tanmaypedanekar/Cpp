#include<iostream>
using namespace std;
int main()
{
    int arr[]={25,89,77,36,28,90};
    int i=0;
    int size=sizeof(arr)/4;
    int j=size-1;

      while(i<j)
       {
        swap(arr[i],arr[j]);
        i++;
        j--;
       }
       
       for(int i=0;i<size;i++)
        {
         cout<<arr[i]<<endl;
        }
    return 0;
}