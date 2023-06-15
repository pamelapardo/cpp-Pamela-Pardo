//
//  main.cpp
//  Boxe-Pamela-Pardo
//
//  Created by Pams on 15/06/2023.
//
#include "Boxeurs.hpp"
#include <iostream>
using namespace std;
using namespace Boxeurs;

int main() {
    cout << "---> DEBUT" << endl << endl;
    
    
    //Utilisation automatique de la class Boxeur
    Boxeur boxeur_1("Box_1", 75);
    cout << "Premier boxeur: " << boxeur_1.GetNom() << ", et a " << boxeur_1.GetPoids() << "kg." << " Il se trouve à: " << &boxeur_1 << endl;
    
    //Utilisation dynamique de boxeur_1
    Boxeur* boxeur_2;
    boxeur_2 = new Boxeur("Box_2", 78);
    cout << "Deuxième boxeur: " << boxeur_2->GetNom() << ", et a " << boxeur_2->GetPoids() << "kg." << " Il se trouve à: " << &boxeur_2 << endl;
    
    
    cout << endl << "---> FIN" << endl;
}
