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
//#define TRACE

using namespace std;

namespace Combats{
    //Declaration du constructeur Combat
    Combat::Combat(string niveau){
//#ifdef TRACE
        this->niveau = niveau;
//#ifdef TRACE
    }

    string Combat::GetNiveau(){
        return this->niveau;
    }

//Declaration du destructeur Combat
    Combat::~Combat(){
    //#ifdef TRACE
        cout << "Destruction du combat"<< endl;
    //#ifdef TRACE
    }
};
lalalala
