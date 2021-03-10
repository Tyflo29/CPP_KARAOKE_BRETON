#include "Eval.h"
#include "Evaluation.cpp"
#include <string>
#include <iostream>

    int main() {
        Player Joueur1 = Player ("florian");
        Joueur1.getNomPlayer();
        std::cout << "________________" << std::endl;
        Joueur1.getMeilleurScorePlayer();
        Joueur1.getTotalScorePlayer();
        Joueur1.getPireScorePlayer();
        Joueur1.getMoyennePlayer();
    };