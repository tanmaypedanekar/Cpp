#include<iostream>
using namespace std;

int sum(int a){
    int add=0;
    for(int i=0;i<=a;i++){
         add=add+i;   
    }
     return add;
}
int main()
{
    int num;
    cout<<"enter a number ";
    cin>>num;
    cout<<"the sum is= "<<sum(num);
  
}