#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int mark[5];
    for(int i=0;i<size;i++)
    {
        cin>>mark[i];
    }
    
    for(int i=0;i<size;i++)
    cout<<mark[i]<<endl;
    return 0;
}