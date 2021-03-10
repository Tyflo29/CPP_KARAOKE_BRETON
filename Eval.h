#include <string>
#include <iostream>

class Player
{
private:
    std::string nomPlayer;
    int score;
    int moyenne;
    int total;
    int numMeilleurMusique;
    int numPireMusique;

public:
    std::string getNomPlayer();
    int getScorePlayer();
    int getMoyennePlayer();
    int getTotalScorePlayer();
    Player();
    Player(std::string name);
};
