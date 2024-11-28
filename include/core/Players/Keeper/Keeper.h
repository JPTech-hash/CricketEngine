#ifndef KEEPER_H
#define KEEPER_H

#include "Player.h"

class Keeper : public Player{
    
        std::vector<int> SeasonCatches;

        int AverageCatches(int Games, int Catches){
            int Average = Catches / Games;
            return Average;
        }
};

#endif