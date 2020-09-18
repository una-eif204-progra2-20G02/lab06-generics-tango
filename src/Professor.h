//
// Created by Steph on 17/9/2020.
//

#ifndef LAB_06_PROFESSOR_H
#define LAB_06_PROFESSOR_H

#include "Person.h"
#include<iostream>
#include<sstream>
using namespace std;

class Professor: public Person {
private:
    double monthlySalary;
    double commissionRate;

public:

///Constructores/////
    Professor();
    Professor(string , string, int, double, double);
///Metodos Get/////
    virtual double getMonthySalary();
    virtual double getCommissionRate();
///Metodos set/////
    virtual void setMonthySalary(double);
    virtual void setCommissionRate(double);
// otros Metodos ///
    double salary() override;
    string toString()override;
    double commission();

};
#endif //LAB_06_PROFESSOR_H
