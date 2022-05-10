#ifndef BOTANISTE_CPP
#define BOTANISTE_CPP

#include "botaniste.h"
#include <iostream>
#include <string>
using namespace std;

Botaniste::Botaniste() : _nom("fredo")
{

}

Botaniste::Botaniste(string nom) : _nom(nom)
{
    
}

string Botaniste::getNom()
{
    return _nom;
}

int Botaniste::getArgent()
{
    cout<<"Vous avez "<<_argent<<" argent."<<endl;
    return _argent;
}

int Botaniste::perdArgent()
{
    cout<<"Vous dépensez 20 euros"<<endl;
    _argent -= 20;
    return _argent;
}
#endif