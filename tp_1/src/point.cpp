#include <point.hpp>

std::ostream &operator<<(std::ostream &flux, const Point &point)
{
    point.afficher(flux);
    return flux;
}

std::istream &operator>>(std::istream &flux, Point &point)
{
    point.charger(flux);
    return flux;
}

