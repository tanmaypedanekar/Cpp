#include<iostream>
using namespace std;

int add=0;
int sum(){
    for(int i=0;i<11;i++){
         add=add+i;   
    }
     return add;
}
int main()
{
    sum();
    cout<<"the sum is= "<<add;
  
}