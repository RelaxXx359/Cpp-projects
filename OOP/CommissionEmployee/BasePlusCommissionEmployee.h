#ifndef COMMISSIONEMPLOYEE_BASEPLUSCOMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_BASEPLUSCOMMISSIONEMPLOYEE_H


#include <string> // C++ standard string class
using std::string;

#include "CommissionEmployee.h" // CommissionEmployee class declaration




class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee( const string &, const string &,
                                const string &, double = 0.0, double = 0.0, double = 0.0 );

    void setBaseSalary( double ); // set base salary
    double getBaseSalary() const; // return base salary

    double earnings() const; // calculate earnings
    void print() const; // print BasePlusCommissionEmployee object


private:
    double baseSalary; // base salary
}; // end class BasePlusCommissionEmployee



#endif //COMMISSIONEMPLOYEE_BASEPLUSCOMMISSIONEMPLOYEE_H
