#ifndef NUAGE_HPP
#define NUAGE_HPP

#include <iostream>
#include <vector>
#include <cartesien.hpp>
#include <polaire.hpp>

template <typename T = Point, typename C = std::vector<T>> class Nuage
{
    protected:
        C n;

    public:
        // Déclaration
        typedef typename std::vector<T>::iterator       iterator;
        typedef typename std::vector<T>::const_iterator const_iterator;
        typedef typename std::vector<T>::value_type     value_type;

        // Constructeur
        Nuage(){};
        ~Nuage(){};

        // Accesseurs
        unsigned size(void) const { return n.size(); }
        void ajouter(const T & point) { n.push_back(point); }
        typename std::vector<T>::const_iterator begin(void) const { return n.begin(); }
        typename std::vector<T>::const_iterator end(void) const { return n.end(); }
        typename std::vector<T>::iterator begin(void) { return n.begin(); }
        typename std::vector<T>::iterator end(void) { return n.end(); }

};

// Fonctions
template <typename T> T barycentre_v1(const Nuage<T> & nuage) {
 Cartesien c;
 double x = 0.0;
 double y = 0.0;
 int n = 0;

 for (typename Nuage<T>::const_iterator i = nuage.begin(); i!=nuage.end(); ++i) {
  //i->convertir(c); // Methode virtuelle
  c=(Cartesien)(*i); // Methode concrete
  x+=c.getX();
  y+=c.getY();
  ++n;
 }

 return (n==0 ? T() : T(Cartesien(x/n,y/n)));
}

template <> Polaire barycentre_v1<Polaire>(const Nuage<Polaire> & nuage) {
 double a = 0.0;
 double d = 0.0;
 int n = 0;

 for (Nuage<Polaire>::const_iterator i = nuage.begin(); i!=nuage.end(); ++i) {
  a+=i->getAngle();
  d+=i->getDistance();
  ++n;
 }

 return (n==0 ? Polaire() : Polaire(a/n,d/n)); // Formule fausse bien entendu !
}

#endif