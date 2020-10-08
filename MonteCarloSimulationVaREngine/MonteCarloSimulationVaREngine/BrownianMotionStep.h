#pragma once
#include "MCStatistics.h"
#include "Random.h"
#include "MCEngine.h"
#include "ValuationFunction.h"
#include "SimulationEngine.h"
class OneStepBrownianMotionEngine : public SimulationEngine
{
public:
	OneStepBrownianMotionEngine(double drift_, std::shared_ptr<valuationFunction>& theFunction_, RiskFactor simulatedRiskFactor_);
	virtual SimulationEngine* clone() const;
	void ApplyReturns(double returns);
	void ApplyInverseReturns(double returns);
	void DoOnePath(double horizon, double vol, double normvariate);
	void UnDoOnePath(double horizon, double vol, double normvariate);
private:
	double drift;
};
