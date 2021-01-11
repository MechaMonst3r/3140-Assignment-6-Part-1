//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Driver file that tests all 3 classes and prints out each version of the virtual
//function.
#include <iostream>
#include <string>
#include "employee.h"
#include "salaryEmp.h"
#include "hourlyEmp.h"
#include "employee.cpp"
#include "salaryEmp.cpp"
#include "hourlyEmp.cpp"
using namespace std;

int main()
{  
  //Creating objects for each class to test.  
  employee emp("John", 'H', "Denver");
  salaryEmp salEmp("Gregg", 'K', "Gregging", 100000);
  hourlyEmp hourEmp("Sally", 'T', "Falcon", 160, 32.32);

  //Pointer variable to point to each object
  employee *pEmp = &emp;
  
  //Testing employee print function
  pEmp -> print();
  cout << "\n";

  //Testing salary employee print function
  pEmp = &salEmp;
  pEmp -> print();
  cout << "\n";
  
  //Testing hourly employee print function
  pEmp = &hourEmp;
  pEmp -> print();

 return 0;   
}