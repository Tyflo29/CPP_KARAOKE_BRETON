#include "Eval.h"
#include <string>
#include <iostream>

std::string Player::getNomPlayer(){
    return nomPlayer;
}

int Player::getMeilleurScorePlayer(){
    for(int i=0;i<sizeof(scoreMusique);i++){
       if(scoreMusique[i]>scoreMusique[(i-1)])
            meilleurScore=scoreMusique[i];
            numMeilleurMusique = i;
    }
    return numMeilleurMusique;
    return meilleurScore;
}

int Player::getMoyennePlayer(){
    for(int i=0;i<sizeof(scoreMusique);i++){
        scoreMusique[i] += reserve;
    }
    moyenne = (reserve/5);
    return moyenne;
}

int Player::getTotalScorePlayer(){
    for(int i=0;i<sizeof(scoreMusique);i++){
        scoreMusique[i] += total;
    }
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
    else (total > 80 && total <= 100);{
        std::cout << "♫ ♫ ♫ ♫ ♫" << std::endl;
    }
    return total;
}

int Player::getPireScorePlayer(){
    for(int i=0;i<sizeof(scoreMusique);i++){
       if(scoreMusique[i]<scoreMusique[(i-1)] && scoreMusique[i] > 0)
            numPireMusique = i;
    }
    return numPireMusique;
}
