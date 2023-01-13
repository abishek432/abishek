#include<iostream>
//#include<math>
using namespace std;
void conver(int cent);
int main()
{
     int cent,dollar,quarter,dimens,nickels,pennis;
     cout<<"Enter the cents need to be convertered:";
    cin>>cent;
    //conver();
    if(cent>0)
    {
        dollar = cent/100;
        quarter = cent / 25;
        dimens = cent /10;
        nickels = cent / 5;
        pennis = cent /1;
    }
    else
    {
        cout<<"Enterthe valid cents!";
    }
    
    cout<<"Dollar is"<<dollar<<"\n"<<"Quater is " <<quarter<<"\n"<<"Dimens is"<<dimens<<"\n"<<"Nickels"<<nickels<<"\n"<<"Pennis"<<pennis<<"\n"<<endl;

    return 0;
    
    
}
// void conver(int cent)
// {
     
    
// }