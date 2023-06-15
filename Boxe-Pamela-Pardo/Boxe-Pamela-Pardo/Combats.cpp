//
//  Combats.cpp
//  Boxe-Pamela-Pardo
//
//  Created by Pams on 15/06/2023.
//
#include <iostream>
#include "Combats.hpp"
#include "Boxeurs.hpp"
#include <string>
#define TRACE

using namespace std;

namespace Combats{
    //Declaration du constructeur Combat
    Combat::Combat(string niveau){
#ifdef TRACE
        this->niveau = niveau;
#endif
    }

    string Combat::GetNiveau(){
        return this->niveau;
    }

    //Declaration du destructeur Combat
    Combat::~Combat(){
#ifdef TRACE
        cout << "Destruction du combat"<< endl;
#endif
    }

    //Declaration des setters
    void Combat:: SetCoinBleu(Boxeurs::Boxeur* coinBleu){
        this->coinBleu = coinBleu;
    }

    Boxeurs::Boxeur* Combat::GetCoinBleu(){
        return coinBleu;
    }

    void Combat:: SetCoinRouge(Boxeurs::Boxeur* coinrouge){
        this-> coinRouge = coinrouge;
    }

    Boxeurs::Boxeur* Combat::GetCoinRouge(){
        return coinRouge;
    }
};
