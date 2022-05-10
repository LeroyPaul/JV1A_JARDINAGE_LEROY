#ifndef PLANTE_H
#define PLANTE_H

#include <string>
#include <vector>

class Plante{

    private:

        string _nom;
        string _espece;
        
    public:
        string getNom();         

        string getEspece();        

        int getSante();        

        int getTaille();
        
        void arroser();

        void couper();
        
        void engrais();

        
        Plante();
        // initialise la grille avec les cases toutes à 0
        Plante(char nom, char espece);
};

#endif