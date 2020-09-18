//
// Created by Steph on 17/9/2020.
//

#include "Administrative.h"
#include <sstream>
#include <iomanip>

Administrative::Administrative():Person(), monthlySalary(0){}

Administrative::Administrative(string _firstName, string _lastName, int _documentid, double _monthlySalary):Person(_firstName, _lastName, _documentid), monthlySalary(_monthlySalary){}

double Administrative::getMonthlySalary()
{
    return monthlySalary;
}

void Administrative::setMonthlySalary(double monthlySalary){
    this->monthlySalary = monthlySalary;
}

double Administrative::salary(){
    return monthlySalary;
}

string Administrative::toString()
{

    stringstream x;

    x <<"Administrative information: "<<this->firstname<<" "<<lastname<<endl;
    x <<"Doc Id: "<<this->documentid<<endl;
    x <<"Monthly Salary: "<<fixed<<setprecision(2)<<this->monthlySalary<<endl;

    return x.str();

}
