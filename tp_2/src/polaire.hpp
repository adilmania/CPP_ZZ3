#ifndef POLAIRE_HPP
#define POLAIRE_HPP

#include <point.hpp>

const double PI = 3.14159265359;

class Polaire : public Point
{
protected:
    double m_angle;
    double m_distance;

public:
    Polaire(void) : m_angle(0.0), m_distance(0.0) {}
    Polaire(double a, double d) : m_angle(a), m_distance(d) {}
    Polaire(const Cartesien &);
    ~Polaire() {}
    double getAngle(void) const { return m_angle; }
    void setAngle(const double &a) { m_angle = a; }
    double getDistance(void) const { return m_distance; }
    void setDistance(const double &d) { m_distance = d; }
    void afficher(std::ostream &) const;
    void charger(std::istream &);
    void convertir(Cartesien &) const;
    void convertir(Polaire &) const;
};

#endif