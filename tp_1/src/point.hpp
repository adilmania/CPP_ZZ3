#ifndef DEF_POINT
#define DEF_POINT

#include <iostream>
#include <sstream>

class Point
{
public:
    Point();
    ~Point();
    virtual void afficher(std::stringstream &flux) const = 0;
    friend std::stringstream &operator<<(std::stringstream &, Point const &);

private:
};

#endif