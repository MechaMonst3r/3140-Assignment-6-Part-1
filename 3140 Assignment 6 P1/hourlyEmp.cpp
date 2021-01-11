//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Implementation file for the derived hourly employee class.
#include <iostream>
#include <string>
#include "employee.h"
#include "hourlyEmp.h"
using namespace std;

//Default constructor using delegation.
hourlyEmp :: hourlyEmp()
{
  employee :: setFirstName("");
  employee :: setInitial(' ');
  employee :: setLastName("");
  fixedWage = 0;
  hoursPerMonth = 0;
  totalWage = 0;
}

//Parameterized constructor using delegation
hourlyEmp :: hourlyEmp(string newFirstName, char newInitial, string newLastName, int hoursPerMonth1, double fixedWage1)
{
  employee :: setFirstName(newFirstName);
  employee :: setInitial(newInitial);
  employee :: setLastName(newLastName);
  fixedWage = fixedWage1;
  hoursPerMonth = hoursPerMonth1;
  totalWage = calcTotalWage();
}

//Copy constructor using delegation
hourlyEmp :: hourlyEmp(hourlyEmp& hourlyEmp1)
{
  employee :: setFirstName(hourlyEmp1.getFirstName());
  employee :: setInitial(hourlyEmp1.getInitial());
  employee :: setLastName(hourlyEmp1.getLastName());
  fixedWage = hourlyEmp1.getFixedWage();
  hoursPerMonth = hourlyEmp1.getHoursPerMonth();
  totalWage = hourlyEmp1.getTotalWage();
}

//Destructor
hourlyEmp :: ~hourlyEmp(){}

//Mutators (getters and setters)
int hourlyEmp :: getHoursPerMonth()
{
  return hoursPerMonth;  
}

double hourlyEmp :: getFixedWage()
{
  return fixedWage;  
}

double hourlyEmp :: getTotalWage()
{
  return totalWage;  
}

void hourlyEmp :: setHoursPerMonth(int hoursPerMonth1)
{
 hoursPerMonth = hoursPerMonth1;
}

void hourlyEmp :: setFixedWage(double fixedWage1)
{
 fixedWage = fixedWage1;   
}

void hourlyEmp :: setTotalWage(double totalWage1)
{
 totalWage = totalWage1;   
}

//Calculates total wage earned based on fixed wage and hours worked in a month.
double hourlyEmp :: calcTotalWage()
{
  double total = hoursPerMonth * fixedWage;
  return total;  
}

//Overloads the virtual print function in the base class
void hourlyEmp :: print()
{
  cout << "First Name: " << getFirstName() << "\n";
  cout << "Initial: " << getInitial() << "\n";
  cout << "Last Name: " << getLastName() << "\n";
  cout << "Wage: $" << fixedWage << "\n";
  cout << "Hours Worked Per Month: " << hoursPerMonth << "\n";
  cout << "Total Wage Earned: $" << totalWage << "\n";
}