#include <iostream>
#include "Livre.h"
using namespace std;

//Le constructeur par défaut;
Livre::Livre(){
    this->id=0;
    this->titre="";
    this->auteur="";
    this->prix=0.0;
    this->quantite=0;
}
//Le constructeur de la classe;
Livre::Livre(int id, string titre, string auteur, double prix, int quantite){
    this->id=id;
    this->titre=titre;
    this->auteur=auteur;
    this->prix=prix;
    this->quantite=quantite;
}
//Les méthodes getters;
int Livre::getId(){
    return id;
}
string Livre::getTitre(){
    return titre;
}
string Livre::getAuteur(){
    return auteur;
}
double Livre::getPrix(){
    return prix;
}
int Livre::getQuantite(){
    return quantite;
}
//Les méthodes setters;
void Livre::setTitre(string nouveautitre){
    this->titre=nouveautitre;
}
void Livre::setAuteur(string nouvelauteur){
    this->auteur=nouvelauteur;
}
void Livre::setPrix(double nouveauprix){
    if(nouveauprix<0)
    {
        cout << "Ce prix n'est pas valide" << endl;
    }
    else
    {
       this->prix=nouveauprix;
    }
}
void Livre::setQuantite(int nouvelquantite){
    if(nouvelquantite<0)
    {
        cout << "Cette quantite n'est pas valide" << endl;
    }
    else
    {
        this->quantite=nouvelquantite;
    }
}
void Livre::afficher(){
    cout << "------------------------------" <<endl;
    cout << "L'ID du livre : " << id <<endl;
    cout << "Son titre : " << titre <<endl;
    cout << "Son auteur : " << auteur <<endl;
    cout << "Son prix : " << prix <<endl;
    cout << "Nombre d'exemplaire : " << quantite <<endl;
}
