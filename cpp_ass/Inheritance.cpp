/*Example for Inhertance
----------------------------------------------------------------------------------------------------------------------------------------------
The program is used for display name , Employee id and salary of the regular Employee and Contractor Employee
----------------------------------------------------------------------------------------------------------------------------------------------
Algorithm
Create a each class for Employee and Contractor
Get the required information from user
display it
----------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <iostream> // Header file which include all input and output model
using namespace std;

----------------------------------------------------------------------------------------------------------------------------------------------

// we create a object that used to store the Employee information
class Employee{
  //Put all the Information should be in private 
  private:
   int Employee_Id;
   string Employee_Name;
   double Employee_salary;
   //create a constructor and function to access the private variable
  public:
   Employee(int id,string name,double salary=0)
   {
     Employee_Id = id;
     Employee_Name = name;
     Employee_salary = salary; 
   }
   
  void setsalary(double sal)
   {
     Employee_salary = sal;
   }
   
   string getName(string name)
   {
     return Employee_Name;
   }
   
   void display()
   {
    cout<<"Employee ID :"<<Employee_Id<<endl;
    cout<<"Employee name :"<<Employee_Name<<endl;
    cout<<"Employee salary: "<<Employee_salary<<endl;
   }
   
 };

 ----------------------------------------------------------------------------------------------------------------------------------------------

 //create a anthor class for Contractor Employee and inhertance with regular Employee
  class Contractor:public Employee
 {
  //salary of the Contractor Employee based on their working hours so make it private
  private:
   double Workhours;
  //create a constructor and function to access the private variable
  public:
  
  Contractor(int eid, string c_name ,double Wh):
  Employee(eid,c_name)
  {
    Workhours = Wh;
    setsalary();
  }
  void setsalary()
  {
    Employee::setsalary(Workhours*120);
  }
 
 void display()
 {
  Employee::display();
  cout<<"Workhours is :"<<Workhours<<endl;
 }
 
 };

----------------------------------------------------------------------------------------------------------------------------------------------

int main()//main function
{
  Employee e1(1,"abi",24000);//pass the Information of regular Employee to Employee class
  e1.display();//display it
 
  Contractor ce1(2,"Abishek",100);//pass the Information of Contractor Employee to Contractor class
  ce1.display();
  return 0;
}
