#include<iostream>
using namespace std;
int main()
{
    int size=7;
    int index=-1;
    int arr[7]={25,89,65,48,75,69,112};
    int target;
    cout<<"enter your target number :-";
    cin>>target;
    for(int i=0;i<size;i++)
     {
        if(target==arr[i])
         {
            cout<<"target is present"<<endl;
            index=i;
         }
        
     }
      cout<<"target index number is "<<index;
       cout<<endl;
    return 0;
}