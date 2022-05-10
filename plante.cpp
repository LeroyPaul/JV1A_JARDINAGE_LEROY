#ifndef PLANTE_CPP
#define PLANTE_CPP

#include "plante.h"
#include <iostream>
#include <string>
using namespace std;

Plante::Plante() : _nom("fredo"), _espece("muguet")
{

}

Plante::Plante(char nom, char espece) : _nom(nom), _espece(espece)
{
    
}

string Plante::getNom()
{
    return ;
}

string Plante::getEspece()
{
    
}

int Plante::getSante()
{
    
}

int Plante::getTaille()
{

}

void Plante::arroser()
{

}

void Plante::couper()
{

}        
void Plante::engrais()
{

}
#endif