#ifndef PLAYER_H
#define PLAYER_H

#include "bits/stdc++.h"
class RockPaperScissors{
    public:
        RockPaperScissors();
        void choosePlay();
        std::string getPlay(void) const;
        static void judge(const RockPaperScissors& player1, const RockPaperScissors& player2);

    private:
        static int playerCount; 
        int playerNumber;
        std::string play;
        bool isValidInput(std::string& input);
};

#endif