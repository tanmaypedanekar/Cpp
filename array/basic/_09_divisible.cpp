#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if(num%3==0 && num%5==0){
        cout<<" ALL OK";
    }
    else  if(num%3==0){
        cout<<"3 ok"<<endl;
    } 
    else if(num%5==0){
        cout<<"5 ok"<<endl;
    }
    else{
        cout<<"NOT OKEY";
    }
    return 0;
}