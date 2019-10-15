#ifndef DEF_POINT
#define DEF_POINT

#include <iostream>
#include <sstream>

class Polaire;
class Cartesien;
class Point
{
private:
public:
    Point();
    virtual ~Point();

    virtual void afficher(std::stringstream &flux) const = 0;
    virtual void convertir(Polaire &) const = 0;
    virtual void convertir(Cartesien &) const = 0;
    friend std::stringstream &operator<<(std::stringstream &, Point const &);
};

#endif