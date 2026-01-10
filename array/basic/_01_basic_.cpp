#include<iostream>0
using namespace std;
int main()
{
    int num;
   
    cin >>num;
    if(num<0){
        cout<<"negative number";
    } else if(num==0){
        cout<<"number is zero";
    }else{
        cout<<"number is positive";
    }
    return 0;
}