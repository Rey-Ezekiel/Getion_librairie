#include <iostream>
#include "Livre.h"
using namespace std;

int main()
{
    Livre L(1, "Les Miserables", "Vistor Hugo", 5000.0, 10);
    L.afficher();
    //Modification du prix;
    L.setPrix(6500.50);
    cout << "--------------------"<<endl;
    //Recuperation et affichage du nouveau prix;
    cout << "Nouveau prix : " << L.getPrix() <<endl;
    L.afficher();
    return 0;
}
