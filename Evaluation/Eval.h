#include <string>
#include <iostream>

class Player
{
private:
    std::string nomPlayer;
    int meilleurScore = 0;
    int moyenne;
    int total;
    int reserve;
    int reserve1;
    int numMeilleurMusique;
    int numPireMusique;
    int scoreMusique[5] = {10,10,10,10,10};

public:
    std::string getNomPlayer();
    int getMeilleurScorePlayer();
    int getMoyennePlayer();
    int getTotalScorePlayer();
    int getPireScorePlayer();
    Player();
    Player(std::string name);
};
