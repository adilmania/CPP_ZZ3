#include <iostream>
#include <sstream>

using namespace std;

#include "cartesien.hpp"

Cartesien::Cartesien() : m_X(0), m_Y(0)
{
}

Cartesien::Cartesien(double x, double y) : m_X(x), m_Y(y)
{
}

Cartesien::Cartesien(const Polaire &p)
{
    p.convertir(*this);
}

Cartesien::~Cartesien()
{
}

void Cartesien::afficher(std::stringstream &flux) const
{
    flux << "(x=" << m_X << ";y=" << m_Y << ")";
}

void Cartesien::convertir(Polaire &p) const
{
    double deg = 360 / (2 * M_PI);
    p.setDistance(sqrt(pow(m_X, 2) + pow(m_Y, 2)));
    p.setAngle(atan(m_Y / m_X) * deg);
}

void Cartesien::convertir(Cartesien &c) const
{
    c.setX(m_X);
    c.setY(m_Y);
}