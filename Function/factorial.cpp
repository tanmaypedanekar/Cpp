#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){  //loop must be start from 1
        fact*=i;
    }
    return fact;
}
int main()
{
   int num;
   cout<<"enter a number = ";
   cin>>num;

   cout<<"The factorial is = "<<factorial(num);  //function call
 
   return 0;
}