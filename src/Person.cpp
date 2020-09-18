//
// Created by Steph on 17/9/2020.
//
#include "Person.h"
//Definición de métodos de la clase Person.h

//------------------------------------------------------------------------------
//Constructor sin parámetros

Person::Person()
{
    string firstname = "Sin Definir";
    string lastname  = "Sin Definir";
    int documentid   =             0;
}

//------------------------------------------------------------------------------
//Constructor con parámetros
Person::Person(string firstname, string lastname, int documentid)
{
    this->firstname  =  firstname;
    this->lastname   =   lastname;
    this->documentid = documentid;
}

//------------------------------------------------------------------------------
//Métodos get
string Person::getFirstname ()  { return firstname; }
string Person::getLastname  ()  { return lastname;  }
int Person::getDocumentid   ()  { return documentid;}

//------------------------------------------------------------------------------
//Métodos set
void Person::setFirstname(string firstname){ this->firstname  =  firstname;  }
void Person::setLastname(string lastname)  { this ->lastname   =  lastname;  }
void Person::setDocumentid(int documentid) { this->documentid=documentid;    }

//-------------------------------------------------------------------
//Destructor
Person::~Person(){}

double Person::salary(){
    return 0;
}
string Person::toString()
{
    stringstream x;

    x <<"Persona: "<<firstname<<","<<lastname<<endl;
    x <<"Doc Id: "<<documentid<<endl;

    return x.str();
}