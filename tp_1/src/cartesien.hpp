#ifndef DEF_CARTESIEN
#define DEF_CARTESIEN

#include <iostream>

#include "point.hpp"

class Cartesien : public Point
{
public:
    Cartesien();
    Cartesien(double x, double y);
    ~Cartesien();
    double getX() const;
    void setX(double value);
    double getY() const;
    void setY(double value);
    void afficher(std::stringstream &flux) const override;

private:
    double X;
    double Y;
};

#endif