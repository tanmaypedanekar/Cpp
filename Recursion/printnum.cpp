#include<iostream>
using namespace std;

void printnum(int n,int num){
    if(n>num){
        return;
    }
     cout<<n<<endl;
     printnum(n+1,num);
}
int main()
{
    int num;
    cout<<"enter number";
    cin>>num;
    printnum(1,num);
    return 0;
}