#include<iostream>
using namespace std;
int main()
{ int sum=1;
   for(int i=1;i<=5;i++){
    for(int s=1;s<=i;s++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<sum<<" ";
        sum++;
        
    }
    cout<<endl;
   }

}