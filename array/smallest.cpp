#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int num[5]={25,89,45,32,15};
    int size=5;
    int smallest= INT_MAX;
     for(int i=0;i<size;i++)
      {
        if(num[i]<smallest)
        {
            smallest=num[i];
        }
      }
            cout<<"the smallest numner is "<<smallest;
    return 0;
}