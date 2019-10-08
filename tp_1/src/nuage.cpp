#include <nuage.hpp>

Nuage::Nuage()
{
}

Nuage::~Nuage()
{
}

int Nuage::size()
{
    return pts.size();
}

void Nuage::ajouter(Point &p)
{
    pts.push_back(&p);
}

Nuage::const_iterator Nuage::begin() const
{
    return pts.begin();
}

Nuage::const_iterator Nuage::end() const
{
    return pts.end();
}

Cartesien barycentre(Nuage &n)
{
    double x = 0;
    double y = 0;
    Cartesien c;
    for (Nuage::const_iterator it = n.begin(); it != n.end(); ++it)
    {
        (*it)->convertir(c);
        x += c.getX();
        y += c.getY();
    }
    return Cartesien(x / n.size(), y / n.size());
}

Cartesien BarycentreCartesien::operator()(Nuage &n)
{
    return barycentre(n);
}

Polaire BarycentrePolaire::operator()(Nuage &n)
{
    Polaire p;
    barycentre(n).convertir(p);
    return p;
}