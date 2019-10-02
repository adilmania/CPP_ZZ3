#ifndef DEF_POLAIRE
#define DEF_POLAIRE

#include <iostream>
#include <sstream>
#include <cmath>
#include <point.hpp>
#include <cartesien.hpp>

class Polaire : public Point
{
public:
    Polaire();
    Polaire(double, double);
    Polaire(const Cartesien &);
    ~Polaire();

    void afficher(std::stringstream &) const override;
    void convertir(Cartesien &) const override;
    void convertir(Polaire &) const override;

    double getAngle() const { return m_angle; };
    double getDistance() const { return m_distance; };
    void setAngle(double a) { m_angle = a; };
    void setDistance(double d) { m_distance = d; };

private:
    double m_angle;
    double m_distance;
};

#endif