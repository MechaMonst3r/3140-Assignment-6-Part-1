//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Interface file for the derived salary employee class.
#ifndef SALARYEMP_DEF
#define SALARYEMP_DEF
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

class salaryEmp : public employee
{
 private:
      double salary;

 public:
      salaryEmp();
      salaryEmp(string firstName, char initial, string lastName, double salary);
      salaryEmp(salaryEmp& salaryEmp1);
      ~salaryEmp();
      double getSalary();
      void setSalary(double salary);
      void print();
};
#endif