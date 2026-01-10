#include<iostream>
using namespace std;

void age(int year)
{
   if(year>=18){
    cout<<"VOTE";
   }else{
    cout<<"DONT VOTE";
   }

}
int main()
{
    int year;
    cout<<"enter your age";
    cin>>year;
    age(year);
  
}