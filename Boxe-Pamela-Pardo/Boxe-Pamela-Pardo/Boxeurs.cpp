//
//  Boxeurs.cpp
//  Boxe-Pamela-Pardo
//
//  Created by Pams on 15/06/2023.
//
#include <iostream>
#include "Boxeurs.hpp"
#include <string>

//#define TRACE

using namespace std;

namespace Boxeurs{
    //Declaration du constructeur Boxeur
    Boxeur::Boxeur(string nom, double poids){
//#ifdef TRACE
        this->nom = nom;
        this->poids = poids;
//#endif
    }

    string Boxeur::GetNom(){
        return this->nom;
    }

    double Boxeur::GetPoids(){
        return this->poids;
    }
    
    Boxeur::~Boxeur(){
#ifdef TRACE
        cout << "=> Destruction de " << this->nom << " a " << this << endl;
#endif
    }
};
