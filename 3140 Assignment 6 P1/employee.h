//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Interface file for the base employee class.
#ifndef EMPLOYEE_DEF
#define EMPLOYEE_DEF
#include <string>
#include <iostream>
using namespace std;

class employee
{
  private:
      string firstName;
      char initial;
      string lastName;

  public:
      employee();
      employee(string name, char initial, string lastName);
      employee(employee& employee1);
      ~employee();
      string getFirstName();
      char getInitial();
      string getLastName();
      void setFirstName(string name);
      void setInitial(char initial);
      void setLastName(string lastName);
      //Virutal function to make the class abstract.
      virtual void print();
};

#endif