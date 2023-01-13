#include <iostream>
#include<vector> 
using namespace std;

int main()
{

class stack
{
 
 private:
 vector<int>s;
 public:
 
 void push (int a)
 {
  s.push_back(a);
 }
 //-----------------------------------------------------------------------------------------------
  int top()
 {
  return s[s.size()-1];
 }
 //-----------------------------------------------------------------------------------------------
 int pop()
 {
  if(s.size()!=0)
  {
   int t = top();
   s.pop_back();
   return t;
  }
 }
};
//-----------------------------------------------------------------------------------------------
   stack s ;
   s.push(0);
   s.push(1);
   s.push(2);
   cout<<s.pop()<<endl;
   std::cout << s.top()<< std::endl;
    return 0;
}

