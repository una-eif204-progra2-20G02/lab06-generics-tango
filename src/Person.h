//
// Created by Steph on 17/9/2020.
//

#ifndef LAB_06_PERSON_H
#define LAB_06_PERSON_H


#include <string>
#include <ostream>
#include <sstream>

using namespace std;

class Person
{

protected:

    string firstname;
    string lastname;
    int documentid;

public:

//Constructores
    Person();
    Person(string, string, int);

//Métodos get
    string getFirstname();
    string getLastname();
    int getDocumentid();


//Métodos set
    void setFirstname(string);
    void setLastname(string);
    void setDocumentid(int);


    virtual double salary();
    virtual string toString();

//Destructor
    virtual ~Person();

};

#endif //LAB_06_PERSON_H
