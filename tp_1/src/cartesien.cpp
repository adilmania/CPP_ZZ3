#include <iostream>
#include <sstream>

using namespace std;

#include "cartesien.hpp"

Cartesien::Cartesien() : X(0), Y(0)
{
}

Cartesien::Cartesien(double x, double y) : X(x), Y(y)
{
}

Cartesien::~Cartesien()
{
}

double Cartesien::getX() const
{
    return X;
}

double Cartesien::getY() const
{
    return Y;
}

void Cartesien::setX(double value)
{
    X = value;
}

void Cartesien::setY(double value)
{
    Y = value;
}

void Cartesien::afficher(std::stringstream &flux) const
{
    flux << "(x=" << X << ";y=" << Y << ")";
}