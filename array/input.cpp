#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int array[5];
    int greatest=INT_MIN;
    int smallest=INT_MAX;
    int size =5;
    for (int i=0;i<size;i++)
     {
        cout<<"enter the number you want:- ";
        cin>>array[i];
     }

     
    for (int i=0;i<size;i++)
     {
        cout<<array[i]<<endl;
     }

     for(int i=0;i<size;i++)
      {
        if(array[i]>greatest)
        greatest=array[i];
      }

      cout<<endl;

      cout<<"greatest number is"<<greatest;

       for(int i=0;i<size;i++)
      {
        if(array[i]<smallest)
        smallest=array[i];
      }

      cout<<endl;

      cout<<"smallest number is"<<smallest;
    return 0;
}