#include <iostream>

using namespace std;

#include "polaire.hpp"

Polaire::Polaire() : a(0), d(0)
{
}

Polaire::Polaire(double a, double d) : a(a), d(d)
{
}

Polaire::~Polaire()
{
}

double Polaire::getAngle() const
{
    return a;
}

double Polaire::getDistance() const
{
    return d;
}

void Polaire::setAngle(double value)
{
    a = value;
}

void Polaire::setDistance(double value)
{
    d = value;
}

void Polaire::afficher(std::stringstream &flux) const
{
    flux << "(a=" << a << ";d=" << d << ")";
}