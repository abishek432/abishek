#include<iostream>
#include<string>
#include<cctype>
using namespace std;
bool isStrong(string);

int main()
{
 string password;
 getline(cin,password);
 if(isStrong(password))
  cout<<"The given password is strong!";
 else
  cout<<"The give password is week";

    return 0;
}

bool isStrong(string password)
{
 bool uppercase=false,numeric=false,special=false;
 
  for(auto cha : password)
  {
   if(isupper(cha))
     uppercase = true;
   if(ispunct(cha))
    special=true;
   if(isdigit(cha))
    numeric=true;
  }
  if(uppercase && numeric && special && password.size()>=8)
   return true;
  return false;
}