//
// Created by Steph on 17/9/2020.
//

#include "Professor.h"
#include <iomanip>
#include <stdexcept>
#include <sstream>

//---------------Constructor sin parametros---------------------------
Professor::Professor():Person(), monthlySalary(0),commissionRate(0)
{}

//---------------Constructor con parámetros---------------------------
Professor::Professor(string firstname,string lastname, int documentid, double _monthlySalary, double _commissionRate): Person(firstname, lastname, documentid), monthlySalary(_monthlySalary), commissionRate(_commissionRate){}


//---------------------Métodos Get------------------------------------
double Professor::getMonthySalary()  { return monthlySalary;  }

double Professor::getCommissionRate(){ return commissionRate; }


//---------------------Métodos set------------------------------------
void Professor::setCommissionRate(double commissionRate)
{ this->commissionRate=commissionRate; }

void Professor::setMonthySalary(double monthlySalary)
{ this->monthlySalary=monthlySalary;   }

//--------------------Otros métodos-----------------------------------
double Professor::salary()
{
    return monthlySalary;
}

double Professor::commission()
{
    commissionRate = monthlySalary * 0.05;
    return commissionRate;
}

//-------------------String toString()--------------------------------
string Professor::toString()
{
    stringstream s;

    s<<"Professor Information: "<<firstname<<" "<<lastname<<endl;
    s<<"Doc Id: "<< documentid <<", ";
    s<<"Monthly Salary: " <<fixed<<setprecision(2)<< monthlySalary << endl;
    s<<"Commission Rate: "<<commission()<<endl;

    return s.str();
}