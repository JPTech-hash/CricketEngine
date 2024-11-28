#ifndef FIELDER_H
#define FIELDER_H

#include "Player.h"

class Fielder : public Player
{
    std::vector<int> SeasonCatches;

    int CalculateSeasonCatches(std::vector<int> CatchesByGame)
    {
        int TotalCatches = 0;
        for (int i = 0; i < CatchesByGame.size(); i++)
        {
            TotalCatches = TotalCatches + CatchesByGame[i];
        }
        return TotalCatches;
    }

    int CalculateAverageSeasonCatches(int MatchNumber, int TotalCatches)
    {
        if (MatchNumber != 0)
        {
            int AverageCatches = TotalCatches / MatchNumber;
            return AverageCatches;
        }
        else
        {
            std::cout << "Devision by 0 is not allowed" << std::endl;
            return 1;
        }
    }
};

#endif