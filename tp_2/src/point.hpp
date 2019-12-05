#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point;
class Cartesien;
class Polaire;

std::ostream &operator<<(std::ostream &, const Point &);
std::istream &operator>>(std::istream &, Point &);

class Point
{
public:
    Point(){};
    ~Point(){};
    virtual void afficher(std::ostream &) const = 0;
    virtual void charger(std::istream &) = 0;
    virtual void convertir(Cartesien &) const = 0;
    virtual void convertir(Polaire &) const = 0;
};

#endif