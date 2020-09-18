//
// Created by Steph on 17/9/2020.
//

#ifndef LAB_06_UNIVERSITY_H
#define LAB_06_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"

class University
{
private:

    string name;
    Professor* professor;
    Administrative* administrative;
    vector<Professor*>professorList;
    vector<Administrative*>administrativeList;

public:
    //------------Constructores-------------------------------------------------------
    University();
    University(string, Professor*, Administrative*);

    //------------Métodos get----------------------------------------------------------
    string getName();
    Professor* getProfessor();
    Administrative* getAdministrative();

    //-----------Métodos set----------------------------------------------------------
    void setAdministrative(Administrative*);
    void setName(string);
    void setProfessor(Professor*);

//----------------Métodos-----------------------------------------------------------
    void addProfessor(Professor *);
    string getListProfessor();

    void addAdministrative(Administrative *);
    string getListAdministrative();

};

#endif //LAB_06_UNIVERSITY_H
