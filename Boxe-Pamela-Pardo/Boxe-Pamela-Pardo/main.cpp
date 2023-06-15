//
//  main.cpp
//  Boxe-Pamela-Pardo
//
//  Created by Pams on 15/06/2023.
//
#include "Boxeurs.hpp"
#include "Combats.hpp"
#include <iostream>
using namespace std;
using namespace Boxeurs;
using namespace Combats;

int main() {
    cout << "---> DEBUT" << endl << endl;
    
    
    //Utilisation automatique d'un Boxeur
    Boxeur boxeur_1("Box_1", 75);
    cout << "Premier boxeur: " << boxeur_1.GetNom() << " a " << boxeur_1.GetPoids() << "kg." << " Il se trouve à: " << &boxeur_1 << endl;
    
    //Utilisation dynamique de boxeur_1
    Boxeur* boxeur_2;
    boxeur_2 = new Boxeur("Box_2", 78);
    cout << "Deuxième boxeur: " << boxeur_2->GetNom() << " a " << boxeur_2->GetPoids() << "kg." << " Il se trouve à: " << &boxeur_2 << endl;
    
    
    //Utilisation automatique d'un Combat
    Combat combat_1("Comb_1_1/8");
    combat_1.SetCoinBleu(&boxeur_1);
    combat_1.SetCoinRouge(boxeur_2);
    
    cout << endl << "****--Le combat de niveau " << combat_1.GetNiveau() << ", dans le Ring " << &combat_1 << "--****"<< endl << endl;
    cout << "###Boxeur avec les coins BLEUS: " << combat_1.GetCoinBleu()->GetNom() << endl;
    cout << "###Boxeur avec les coins ROUGES: " << combat_1.GetCoinRouge()->GetNom() << endl << endl;
    
    

    
    delete boxeur_2;
    cout << endl << "---> FIN" << endl;
}
