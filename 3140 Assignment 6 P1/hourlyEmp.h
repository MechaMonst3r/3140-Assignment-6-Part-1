//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-11-14
//Description: Interface file for the derived hourly employee class.
#ifndef HOURLYEMP_DEF
#define HOURLYEMP_DEF
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

class hourlyEmp : public employee
{
  private:
       int hoursPerMonth;
       double fixedWage, totalWage;

  public:
      hourlyEmp();
      hourlyEmp(string firstName, char initial, string lastName, int hoursPerMonth, double fixedWage);
      hourlyEmp(hourlyEmp& hourlyEmp1);
      ~hourlyEmp();
      int getHoursPerMonth();
      double getFixedWage();
      double getTotalWage();
      void setHoursPerMonth(int hoursPerMonth);
      void setFixedWage(double fixedWage);
      void setTotalWage(double totalWage);
      double calcTotalWage();
      void print();
};
#endif