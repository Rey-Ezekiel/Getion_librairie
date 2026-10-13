#ifndef LIVRE_H_INCLUDED
#define LIVRE_H_INCLUDED
#include <iostream>
using namespace std;

//Déclaration de la classe livre
class Livre{
private :
    int id;
    string titre, auteur;
    double prix;
    int quantite;

public :
    //Déclaration du constructeur par défaut;
    Livre();
    //Déclaration du constructeur;
    Livre(int id, string titre, string auteur, double prix, int quantite);
    //Déclaration des méthodes;
    int getId();
    string getTitre();
    string getAuteur();
    double getPrix();
    int getQuantite();
    void setTitre(string nouveautitre);
    void setAuteur(string nouvelauteur);
    void setPrix(double nouveauprix);
    void setQuantite(int nouvelquantite);
    void afficher();
};

#endif // LIVRE_H_INCLUDED
