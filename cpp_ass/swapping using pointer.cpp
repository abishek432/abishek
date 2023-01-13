#include <iostream>
using namespace std;
void pointer(int* ptr);
void swap(int* ptr,int* ptr1)
{
    int temp;
    temp = *ptr;
    *ptr = *ptr1;
    *ptr1 = temp;
    
}

int main()
{
    int value {2};
    int value1 {3};
    cout<<"Before swapping :"<<value<<"and"<<value1;
    swap(&value,&value1);
    cout<<"\nvalue after swapping:"<<value<<"and"<<value1;
    cout<<endl;
    return 0;
}