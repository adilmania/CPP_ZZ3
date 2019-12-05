#include <cmath>
#include <cartesien.hpp>
#include <polaire.hpp>

Polaire::Polaire(const Cartesien &cartesien) { cartesien.convertir(*this); }

void Polaire::afficher(std::ostream &flux) const
{
    flux << "(a=" << m_angle << ";d=" << m_distance << ")";
}

void Polaire::charger(std::istream &flux)
{
    flux >> m_angle;
    flux >> m_distance;
}

void Polaire::convertir(Cartesien &cartesien) const
{
    double angle = m_angle * PI / 180.;

    cartesien.setX(m_distance * cos(angle));
    cartesien.setY(m_distance * sin(angle));
}

void Polaire::convertir(Polaire &polaire) const
{
    polaire.m_angle = m_angle;
    polaire.m_distance = m_distance;
}