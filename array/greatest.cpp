#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int num[5]={25,89,45,32,15};
    int size=5;
    int greatest= INT_MIN;
    int index=0;
     for(int i=0;i<size;i++)
      {
        if(num[i]>greatest)
        {
            greatest=num[i];
            index=i;
        }
      }
            cout<<"the greatest numner is "<<greatest<<endl;
              cout<<"the index number is "<<index;
    return 0;
}