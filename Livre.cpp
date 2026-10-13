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
void Livre::setTitre(){

}
