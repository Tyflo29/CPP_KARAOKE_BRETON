#include "Eval.h"
#include <string>
#include <iostream>

std::string Player::getNomPlayer(){
    return nomPlayer;
}

int Player::getScorePlayer(){
    for(int i=0;i<50;++i){
       if(scoreMusique[i]>meilleurScore)
            meilleurScore=scoreMusique[i];
    }
    return meilleurScore;
}

int Player::getMoyennePlayer(){
    return moyenne;
}

