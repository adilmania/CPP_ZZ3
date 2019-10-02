#ifndef DEF_CARTESIEN
#define DEF_CARTESIEN

#include <iostream>
#include <sstream>
#include <cmath>
#include <point.hpp>
#include <polaire.hpp>

class Cartesien : public Point
{
private:
    double m_X;
    double m_Y;

public:
    Cartesien();
    Cartesien(double, double);
    Cartesien(const Polaire &);
    ~Cartesien();

    void afficher(std::stringstream &flux) const override;
    void convertir(Polaire &) const override;
    void convertir(Cartesien &) const override;

    double getX() const { return m_X; };
    void setX(double x) { m_X = x; };
    double getY() const { return m_Y; };
    void setY(double y) { m_Y = y; };
};

#endif