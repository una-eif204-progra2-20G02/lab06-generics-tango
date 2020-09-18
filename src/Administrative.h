//
// Created by Steph on 17/9/2020.
//

#ifndef LAB_06_ADMINISTRATIVE_H
#define LAB_06_ADMINISTRATIVE_H

#include "Person.h"

class Administrative: public Person {
private:
    double monthlySalary;
public:
    //Constructores
    Administrative();
    Administrative(string, string, int, double);

    //Metodos
    double getMonthlySalary();
    void setMonthlySalary(double);
    double salary() override;
    string toString()override;

};

#endif //LAB_06_ADMINISTRATIVE_H
