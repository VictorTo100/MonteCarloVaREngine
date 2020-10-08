#pragma once
#include <vector>
#include "Arrays.h"
#include <numeric>  
#include "MCStatistics.h"
class StatisticsRelVaR : public StatisticsMC
{
public:
	StatisticsRelVaR(double p_, unsigned long minimumNumberOfPaths = 1);
	virtual void DumpOneResult(double result);
	virtual std::vector<std::vector<double>> GetResultsSoFar() const;
	virtual StatisticsMC* clone() const;
private:
	std::vector<double> ResultList;
	double p;
	unsigned long PathsDone;
};