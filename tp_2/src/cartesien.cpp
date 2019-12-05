#include <cmath>
#include <cartesien.hpp>
#include <polaire.hpp>

Cartesien::Cartesien(const Polaire &polaire) { polaire.convertir(*this); }

void Cartesien::afficher(std::ostream &flux) const
{
    flux << "(x=" << m_x << ";y=" << m_y << ")";
}

void Cartesien::charger(std::istream &flux)
{
    flux >> m_x;
    flux >> m_y;
}

void Cartesien::convertir(Cartesien &cartesien) const
{
    cartesien.m_x = m_x;
    cartesien.m_y = m_y;
}

void Cartesien::convertir(Polaire &polaire) const
{
    double distance = std::sqrt(m_x * m_x + m_y * m_y);
    double angle;

    if (distance == 0)
        angle = 0;

    if (m_x == 0)
    {
        if (m_y < 0)
            angle = -PI;
        else
            angle = PI;
    }
    else
    {
        if (m_x > 0)
            angle = std::atan(m_y / m_x);
        else if (m_x < 0 && m_y >= 0)
            angle = std::atan(m_y / m_x) + PI;
        else
            angle = std::atan(m_y / m_x) - PI;
    }

    polaire.setDistance(distance);
    polaire.setAngle(180.0 * angle / PI);
}