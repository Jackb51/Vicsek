#include "system.h"
#include <iostream>

System::System() : particleNumber(100), sideLength(20.0), timeStep(0.5), noiseStrength(0.1)
{
    // Default constructor implementation
}

System::System(int particleNumber, double sideLength, double timeStep, double noiseStrength)
{
    this->particleNumber = particleNumber;

    this->sideLength = sideLength;

    this->timeStep = timeStep;

    this->noiseStrength = noiseStrength;

    // whatever we want to do as we instantiate the system
}

void System::updateRule()
{
    std::cout << particleNumber << std::endl;
}