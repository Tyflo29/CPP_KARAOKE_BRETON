#include <string>
#ifndef EVAL_H 
#define EVAL_H 

    class Player
    {
    private:
        std::string nomPlayer;
        int meilleurScore = 0;
        int pireScore = 100;
        int moyenne;
        int total;
        int reserve;
        int reserve1;
        int numMeilleurMusique;
        int numPireMusique;
        int scoreMusique[5] = {20,10,19,15,5};

    public:
        std::string getNomPlayer();
        int getMeilleurScorePlayer();
        int getMoyennePlayer();
        int getTotalScorePlayer();
        int getPireScorePlayer();
        Player();
        Player(std::string name);
    };
#endif
