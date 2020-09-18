//
// Created by Steph on 17/9/2020.
//

#include <iostream>
#include "Professor.h"
#include "Administrative.h"
#include "University.h"

using namespace std;

    int main()
    {

        setlocale(LC_ALL, "");
        cout << "Hola" << endl;

        Professor *p1= new Professor("Mike","Guzmán", 1234567890,1575000,0);

        cout<<endl<<endl;


        Professor *p2=new Professor("Pedro","Sánchez",1286608618,1050000,0);

        Administrative *a1= new Administrative("Marta", "Rojas", 272923934, 800000);
        Administrative *a2= new Administrative("Andrea","Jaramillo",272923934,500000);

        University* u1 = new University("UNA", p1,a1);

        u1->addProfessor(p1);
        u1->addProfessor(p2);
        cout<<u1->getListProfessor();

        u1->addAdministrative(a1);
        u1->addAdministrative(a2);
        cout<<u1->getListAdministrative();


        cin.get();



    return 0;
}

