#include <string>
#include <iostream>

class Player
{
private:
    std::string nomPlayer;
    int meilleurScore;
    int moyenne;
    int total;
    int numMeilleurMusique;
    int numPireMusique;
    int scoreMusique[5];

public:
    std::string getNomPlayer();
    int getScorePlayer();
    int getMoyennePlayer();
    int getTotalScorePlayer();
    Player();
    Player(std::string name);
};
