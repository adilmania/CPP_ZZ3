#include <iostream>

#include "point.hpp"

Point::Point()
{
}

Point::~Point()
{
}

std::stringstream &operator<<(std::stringstream &flux, Point const &p)
{
    p.afficher(flux);
    return flux;
}