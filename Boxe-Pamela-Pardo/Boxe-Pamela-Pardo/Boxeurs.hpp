//
//  Boxeurs.hpp
//  Boxe-Pamela-Pardo
//
//  Created by Pams on 15/06/2023.
//

#ifndef Boxeurs_hpp
#define Boxeurs_hpp
#include <string>
#include <stdio.h>
using namespace std;

namespace Boxeurs{
    class Boxeur{
        string nom;
        double poids;
    public:
        Boxeur(string nom, double poids);
        ~Boxeur();
        
        string GetNom();
        double SetPoids();
        double GetPoids();
    };
}

#endif /* Boxeurs_hpp */
