#include<iostream>
using namespace std;
int main()
{
    int arr[5]={25,46,79,13,28};
    int size=5;
    int sum=0;
    for(int i=0;i<size;i++)
     {
        sum=sum+arr[i];
     }
     cout<<sum;
    return 0;
}