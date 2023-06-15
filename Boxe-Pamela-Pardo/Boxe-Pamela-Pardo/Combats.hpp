//
//  Combats.hpp
//  Boxe-Pamela-Pardo
//
//  Created by Pams on 15/06/2023.
//

#ifndef Combats_hpp
#define Combats_hpp
#include "Boxeurs.hpp"
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

namespace Combats{
    class Combat{
        string niveau;
    public:
        //Constructeur parametré:
        Combat(string niveau);
        //Destructeur:
        ~Combat();
        
        //Setter pour realiser l'association
        Boxeurs::Boxeur* GetCoinBleu();
        Boxeurs::Boxeur* GetCoinRouge();
        string SetCoinBleu(Boxeurs::Boxeur* boxeur);
        string SetCoinRouge(Boxeurs::Boxeur* boxeur);
        Boxeurs::Boxeur* GetVainqueur();
        string DesignerVainqueur(Boxeurs::Boxeur* boxeur);
    };
};

#endif /* Combats_hpp */
