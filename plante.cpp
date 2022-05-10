#ifndef PLANTE_CPP
#define PLANTE_CPP

#include "plante.h"
#include <iostream>
#include <string>
using namespace std;

Plante::Plante() : _nom("fredo"), _espece("muguet")
{

}

Plante::Plante(string nom, string espece) : _nom(nom), _espece(espece)
{
    
}

string Plante::getNom()
{
    cout <<_nom <<endl;
    return _espece;
}

string Plante::getEspece()
{
    cout <<_espece <<endl;
    return _espece;
}

int Plante::getSante()
{
    _sante = _soif + _nbFeuille;
    if (_sante >= 15 && _sante <= 25){
        cout<<_nom<< " est en bonne santé"<<endl;
        if (_engrais == true){
            _pousse = 2;
            _engrais = false;}
        else{
            _pousse = 1;
        }
        
    }
    if (_sante > 25 && _sante < 40){
        cout<<_nom<< " est en mauvaise santé"<<endl;
        _pousse = 0;
    }
    if (_sante < 15 && _sante > 0){
        cout<<_nom<< " est en mauvaise santé"<<endl;
        _pousse = 0;
    }
    if (_sante < 0){
        cout<<_nom<< " EST MORTE !!!"<<endl;
        _pousse = 0;
    }
    if (_sante > 40){
        cout<<_nom<< " EST MORTE !!!"<<endl;
        _pousse = 0;
        }
    return _sante;
    return _pousse;
}

int Plante::getTaille()
{
    cout<<_nom<<" fait désormais "<<_taille<<" cm de haut !"<<endl;
    return _taille;
}

int Plante::arroser()
{
    _soif -= 5;
    cout<<"Vous avez arrosé "<<_nom<<" !"<<endl;
    return _soif;
}

int Plante::couper()
{
    _nbFeuille -= 5;
    cout<<"Vous avez découpé les feuilles de "<<_nom<<" !"<<endl;
    return _nbFeuille;
}        
bool Plante::engrais()
{
    cout<<"Vous avez mis de l'engrais dans le pot de "<<_nom<<" !"<<endl;
    _engrais = true;
    return _engrais;
}

int Plante::nouveauJour()
{
    _soif += 3;
    _nbFeuille += 2;
    return _soif;
    return _nbFeuille;
}

int Plante::pousse(){
    if (_pousse == 2){
        _taille += 10;
    }
    if (_pousse == 1){
        _taille += 5;
    }
    if (_pousse == 0){
        _taille += 0;
    }
    return _taille;
}

void Plante::inspecter(){
    if (_nbFeuille >= 15){
        cout<<_nom<<" à un feuillage très abondant."<<endl;
    }
    if (_nbFeuille < 15 && _nbFeuille > 5){
        cout<<_nom<<" à un feuillage tout propre. "<<endl;
    }
    if (_nbFeuille <= 5){
        cout<<_nom<<" manque de feuilles. "<<endl;
    }
    if (_soif >= 15){
        cout<<"et est submergé par l'eau."<<endl;
    }
    if (_soif < 15 && _nbFeuille > 5){
        cout<<"et est bien hydratée. "<<endl;
    }
    if (_soif <= 5){
        cout<<"et a soif."<<endl;
    }

}
#endif