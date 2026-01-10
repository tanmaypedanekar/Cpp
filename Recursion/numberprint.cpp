#include<iostream>
using namespace std;

void printnum(int n){
    if(n==1){
        cout<<"BASE CASE";
        return;
    }
     cout<<n<<endl;
     printnum(n-1);
}
int main()
{
    printnum(9);
    return 0;
}