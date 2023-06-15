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
    Boxeur boxeur_1("Boxeur_1", 75);
    cout << "Premier boxeur: " << boxeur_1.GetNom() << ", avec " << boxeur_1.GetPoids() << "kg." << endl;
}
