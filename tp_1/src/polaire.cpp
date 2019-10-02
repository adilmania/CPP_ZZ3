#include <iostream>

#include "polaire.hpp"

Polaire::Polaire() : m_angle(0), m_distance(0)
{
}

Polaire::Polaire(double a, double d) : m_angle(a), m_distance(d)
{
}

Polaire::Polaire(const Cartesien &c)
{
    c.convertir(*this);
}

Polaire::~Polaire()
{
}

void Polaire::afficher(std::stringstream &flux) const
{
    flux << "(a=" << m_angle << ";d=" << m_distance << ")";
}

void Polaire::convertir(Cartesien &c) const
{
    double rad = (2 * M_PI) / 360;
    c.setX(m_distance * cos(m_angle * rad));
    c.setY(m_distance * sin(m_angle * rad));
}

void Polaire::convertir(Polaire &p) const
{
    p.setAngle(m_angle);
    p.setDistance(m_distance);
}