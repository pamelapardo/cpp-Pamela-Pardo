//
//  Boxeurs.cpp
//  Boxe-Pamela-Pardo
//
//  Created by Pams on 15/06/2023.
//
#include <iostream>
#include "Boxeurs.hpp"
#include <string>
using namespace std;

namespace Boxeurs{
    //Declaration du constructeur
    Boxeur::Boxeur(string nom, double poids){
        this->nom = nom;
        this->poids = poids;
    }

    string Boxeur::GetNom(){
        return this->nom;
    }

    double Boxeur::GetPoids(){
        return this->poids;
    }
    
    Boxeur::~Boxeur(){
        cout << "=> Destruction de " << this->nom << " a " << this << endl;
    }
};
