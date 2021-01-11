//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Implementation file for the derived salary employee class.
#include <iostream>
#include <string>
#include "employee.h"
#include "salaryEmp.h"
using namespace std;

//Default constructor using delegation
salaryEmp :: salaryEmp()
{
  employee :: setFirstName("");  
  employee :: setInitial(' ');
  employee :: setLastName("");
  salary = 0;  
}

//Parameterized constructor using delegation
salaryEmp :: salaryEmp(string newFirstName, char newInitial, string newLastName, double newSalary)
{
 employee :: setFirstName(newFirstName);
 employee :: setInitial(newInitial);
 employee :: setLastName(newLastName);
 salary = newSalary; 
}

//Copy constructor using delegation
salaryEmp :: salaryEmp(salaryEmp& salaryEmp1)
{
 employee :: setFirstName(salaryEmp1.getFirstName());
 employee :: setInitial(salaryEmp1.getInitial());
 employee :: setLastName(salaryEmp1.getLastName());
 salary = salaryEmp1.getSalary();
}

//Destructor
salaryEmp :: ~salaryEmp(){}

//Mutators (getters and setters)
double salaryEmp :: getSalary()
{
  return salary;  
}

void salaryEmp :: setSalary(double newSalary)
{
  salary = newSalary;   
}

//Print function that overrides the virtual function from the base class
void salaryEmp :: print()
{
  cout << "First Name: " << getFirstName() << "\n";
  cout << "Initial: " << getInitial() << "\n";
  cout << "Last Name: " << getLastName() << "\n";
  cout << "Salary: $" << salary << "\n";
}