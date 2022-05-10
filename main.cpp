#include <iostream>
#include <string>
#include "plante.cpp"
#include "botaniste.cpp"

int main(){
    string name;
    cout<<"Bonjour"<<endl;
    cout<<"Quel est votre nom ?"<<endl;
    cin>>name;
    Botaniste * fredo = new Botaniste(name);
    cout<<"Bienvenue "<< fredo -> getNom() <<". Vous êtes désormais BOTANISTE !"<<endl;
    Plante * premierePlante = new Plante("Penelope","Tulipe");
    int plante=true;
    int choix = 0;
    int action = 4;


    cout<<"Vous venez d'acheter une Tulipe du nom de Penelope. Occupez-en vous bien !"<<endl;
    while (plante == true){
        cout<< "-----NOUVEAU--JOUR-----"<<endl;
        action = 4;
        premierePlante -> nouveauJour();
        premierePlante -> getSante();
        premierePlante -> pousse();
        premierePlante -> getTaille();
        while (action != 0){
            cout<< "----------------------"<<endl;
            if (choix == 5){
                cout<<"Il vous reste "<< action<<" actions"<<endl;
                cout<<"Que voulez-vous faire ?"<<endl;
                cout<<"Passer au prochain jour(1) / Inspecter votre plante(2) / Arroser votre plante(3) / Couper les feuilles de votre plantes(4)"<<endl;
                cin >> choix;
                if (choix == 1){
                action = 0;}
                if (choix == 2){
                premierePlante -> inspecter();
                action -= 1;}
                if (choix == 3){
                premierePlante -> arroser();
                action -= 1;}
                if (choix == 4){
                premierePlante -> couper();
                action -= 1;}
                }
            if(action != 0){
            cout<<"Il vous reste "<< action<<" actions"<<endl;
            cout<<"Que voulez-vous faire ?"<<endl;
            cout<<"Passer au prochain jour(1) / Inspecter votre plante(2) / Arroser votre plante(3) / Couper les feuilles de votre plantes(4) / Mettre de l'engrais sur votre plante(5)"<<endl;
            cin >> choix;
            if (choix == 1){
            action = 0;}
            if (choix == 2){
            premierePlante -> inspecter();
            action -= 1;}
            if (choix == 3){
            premierePlante -> arroser();
            action -= 1;}
            if (choix == 4){
            premierePlante -> couper();
            action -= 1;}
            if (choix == 5){
            premierePlante -> engrais();
            action -= 1;}
            }
        }
    }
}