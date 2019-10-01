#ifndef DEF_POLAIRE
#define DEF_POLAIRE

#include <iostream>
#include <sstream>

#include "point.hpp"

class Polaire : public Point
{
public:
    Polaire();
    Polaire(double a, double d);
    ~Polaire();
    double getAngle() const;
    double getDistance() const;
    void setAngle(double value);
    void setDistance(double value);
    void afficher(std::stringstream &flux) const override;

private:
    double a;
    double d;
};

#endif