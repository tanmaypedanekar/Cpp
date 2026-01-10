#include<iostream>
using namespace std;

void square(int n){
    int sq=0;
    for(int i=1;i<=n;i++){
     cout<<i*i<<endl;
    }
  
}

int main()
{
    int num;
    cout<<"enter a number";
    cin>>num;
    square(num);

    return 0;
}