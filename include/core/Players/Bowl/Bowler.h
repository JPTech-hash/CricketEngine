#ifndef BOWLER_H
#define BOWLER_H

#include "Player.h"

class Bowler : public Player
{

    std::vector<int> OversBowled;

    std::vector<int> RunsConceded;

    std::vector<int> WicketsTaken;

    int TotalOfStatistics(std::vector<int> StatisticsThatNeedsTotalCalculated)
    {
        int Total = 0;
        for (int i = 0; i < StatisticsThatNeedsTotalCalculated.size(); i++)
        {
            Total = Total + StatisticsThatNeedsTotalCalculated[i];
        }
        return Total;
    }

    int CalculateAverage(int Games, int StatisticsThatNeedsAverageCalculated)
    {
        int Average;
        if (Games != 0)
        {
            Average = StatisticsThatNeedsAverageCalculated / Games;
            return Average;
        }
        std::cout << "Devision by 0 is not allowed" << std::endl;
        return 1;
    }
};

#endif