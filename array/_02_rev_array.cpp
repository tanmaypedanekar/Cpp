#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int array[size];
    for( int i=0;i<size;i++){
        cin>>array[i];
    }
    int start=0;
    int last=size-1;

    while(start<last){
        int temp = array[start];
        array[start] = array[last];
        array[last] = temp;
            start++;
            last--;
        }
         for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    return 0;
}