#include <iostream>
using namespace std;

class Room
{
 private:
  int len;
  int breadth;
  public:
  void setvalue(int l , int b)
{
   len = l;
   breadth = b;
}
int getlenvalue()
{
 return len;
}
int getbreadthvalue()
{
 return breadth;
}
  int value()
  {
    return len*breadth;
  }
};

int main()
{
  Room R1;
  R1.setvalue(10,8);
  cout <<R1.value()<< endl;
  cout << R1.getbreadthvalue()<<endl;
  cout << R1.getlenvalue()<<endl;
return 10;
}