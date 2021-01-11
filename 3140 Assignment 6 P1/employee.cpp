//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Implementaion file for the base employee class.
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

//Default constructor
employee :: employee()
{
 firstName = "";
 initial = ' ';
 lastName = "";
}

//Parameterized constructor
employee :: employee(string newFirstName, char newInitial, string newLastName)
{
  firstName = newFirstName;
  initial = newInitial;
  lastName = newLastName;  
}

//Copy constructor
employee :: employee(employee& employee1)
{
  firstName = employee1.getFirstName();
  initial = employee1.getInitial();
  lastName = employee1.getLastName();   
}

//Destructor
employee :: ~employee(){}

//Mutators (getters and setters)
string employee :: getFirstName()
{
  return firstName;   
}

char employee :: getInitial()
{
  return initial;  
}

string employee :: getLastName()
{
  return lastName;  
}

void employee :: setFirstName(string newFirstName)
{
  firstName = newFirstName;  
}

void employee :: setInitial(char newInitial)
{
  initial = newInitial;  
}

void employee :: setLastName(string newLastName)
{
  lastName = newLastName;  
}

//Virutal print function for the base class
void employee :: print()
{
  cout << "First Name: " << firstName << "\n";  
  cout << "Initial: " << initial << "\n"; 
  cout << "Last Name: " << lastName << "\n"; 
}