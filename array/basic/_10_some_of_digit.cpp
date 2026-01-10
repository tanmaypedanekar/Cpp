#include<iostream>
using namespace std;
int main()

{
    int sum=0, digit,num;
    cout<<"enter number";
    cin>>num;

    while(num>0){
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
     cout<<sum;



    return 0;
}