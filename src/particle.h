#ifndef PARTICLE_H
#define PARTICLE_H
#include <vector>

class Particle
{
public:
    double xPart;
    double yPart;
    double theta;
    double v;
    double r;
    std::vector<Particle> particles;

    Particle();

    Particle(double xPart, double yPart, double theta, double v, double r);

    void setParticleCoord(double xPart, double yPart, double theta, double v, double r);

}

#endif