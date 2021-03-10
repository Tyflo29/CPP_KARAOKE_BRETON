#include "Eval.h"
#include <string>
#include <iostream>

    Player::Player(std::string name){
        nomPlayer = name;
    }
    Player::Player(){
        nomPlayer = "Défaut";
    }


    std::string Player::getNomPlayer(){
        return nomPlayer;
    }

    int Player::getMeilleurScorePlayer(){
        for(int i=0;i<6;i++){
        if(scoreMusique[i]>meilleurScore)
                meilleurScore = scoreMusique[i];
                numMeilleurMusique = i;
        }
        std::cout << "Le numéro de la musique avec le meilleur bon score est : "<< numPireMusique << std::endl;
        std::cout << "Votre meilleur score est : "<<meilleurScore << std::endl;
        return numMeilleurMusique;
        return meilleurScore;
    }

    int Player::getMoyennePlayer(){
        for(int i=0;i<5;i++){
            reserve += scoreMusique[i];
        }
        moyenne = (reserve/5);
        std::cout <<"Votre moyenne de score est : "<< moyenne << std::endl;
        return moyenne;
    }

    int Player::getTotalScorePlayer(){
        for(int i=0;i<6;i++){
            total += scoreMusique[i];
        }
        std::cout << "Votre total de score est : "<<total << std::endl;
        if (total > 0 && total <20){
            std::cout << "♫ _ _ _ _" << std::endl;
        }
        else if (total > 20 && total <40){
            std::cout << "♫ ♫ _ _ _" << std::endl;
        }
        else if (total > 40 && total <60){
            std::cout << "♫ ♫ ♫ _ _" << std::endl;
        }
        else if (total > 60 && total <80){
            std::cout << "♫ ♫ ♫ ♫ _" << std::endl;
        }
        else if (total > 80 && total <= 100){
            std::cout << "♫ ♫ ♫ ♫ ♫" << std::endl;
        }
        else;
        return total;
    }

    int Player::getPireScorePlayer(){
        for(int i=0;i<6;i++){
        if(scoreMusique[i] < pireScore)
                numPireMusique = i;
        }
        std::cout << "Le numéro de la musique avec le moins bon score est : "<< numPireMusique << std::endl;
        return numPireMusique;
    }
