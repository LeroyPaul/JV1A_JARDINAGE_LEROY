#ifndef PLANTE_H
#define PLANTE_H

using namespace std;
#include <string>
#include <vector>


class Plante{

    private:

        string _nom;
        string _espece;
        int _sante = 20;
        int _taille = 0;
        int _nbFeuille = 8;
        int _soif = 7;
        int _pousse = 0;
        bool _engrais = false;
        
    public:
        string getNom();         

        string getEspece();        

        int getSante();        

        int getTaille();
        
        int arroser();

        int couper();
        
        bool engrais();

        int nouveauJour();

        int pousse();

        void inspecter();

        
        Plante();

        Plante(string nom, string espece);
};

#endif