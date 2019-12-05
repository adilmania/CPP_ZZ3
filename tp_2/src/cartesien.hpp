#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP

#include <point.hpp>

class Cartesien : public Point
{
protected:
    double m_x;
    double m_y;

public:
    Cartesien(void) : m_x(0.0), m_y(0.0) {}
    Cartesien(double x, double y) : m_x(x), m_y(y) {}
    Cartesien(const Polaire &);
    ~Cartesien() {}
    double getX(void) const { return m_x; }
    void setX(const double &x) { m_x = x; }
    double getY(void) const { return m_y; }
    void setY(const double &y) { m_y = y; }
    void afficher(std::ostream &) const;
    void charger(std::istream &);
    void convertir(Polaire &) const;
    void convertir(Cartesien &) const;
};

#endif