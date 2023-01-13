#include <iostream>

using namespace std;

int main()
{
   string vowels;
   cout<<"Enter the character :";
   getline(cin,vowels);
   for(auto c:vowels)
   {
    cout<<c<<endl;
    if( (c=='A'|| c =='a') ||(c == 'E' || c == 'e') || (c == 'I' || c == 'i') || ( c == 'O' || c == 'o') || (c =='W' || c == 'w') )
     cout<<"Yes :"<<c<<endl;
    else
     cout<<"No :"<<c<<endl;
   }
   system("pause");
   return 0;
}