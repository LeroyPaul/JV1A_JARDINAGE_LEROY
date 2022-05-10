#ifndef BOTANISTE_H
#define BOTANISTE_H

using namespace std;
#include <string>
#include <vector>


class Botaniste{

    private:

        string _nom;
        int _argent = 100;
        
    public:
        string getNom();         

        int getArgent();

        int perdArgent();
        
        Botaniste();
        
        Botaniste(string nom);
};

#endif