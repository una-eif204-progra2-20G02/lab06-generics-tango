//
// Created by Steph on 17/9/2020.
//

#include "University.h"
#include <sstream>

//---------------Constructor sin parámetros---------------------------------------
University::University(){}


//---------------Constructor con parámetros---------------------------------------
University::University(string _name, Professor* _professor, Administrative* _administrative):name(_name),professor(_professor), administrative(_administrative){}
//----------------Métodos get------------------------------------------------------
string University::getName(){ return name; }
Professor * University::getProfessor(){ return professor; }
Administrative* University::getAdministrative(){ return administrative; }

//----------------Métodos set------------------------------------------------------

void University::setName(string name){ this-> name = name; }
void University::setProfessor(Professor* prof){ this->professor = prof; }
void University::setAdministrative(Administrative* admin){this->administrative = admin; }

void University::addProfessor(Professor* professor)
{
    professorList.push_back(professor);
}

string University::getListProfessor(){
    stringstream s;
    for(int i=0; i< professorList.size();i++){
        s<<professorList[i]->toString()<<endl;
    }
    return s.str();
}

void University::addAdministrative(Administrative* administrative)
{
    administrativeList.push_back(administrative);
}

string University::getListAdministrative()
{
    stringstream s;
    for(int i=0; i< administrativeList.size();i++)
    {
        s<<administrativeList[i]->toString()<<endl;
    }
    return s.str();
}