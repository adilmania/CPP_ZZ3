#ifndef ECHANTILLON_HPP
#define ECHANTILLON_HPP

#include <valeur.hpp>
#include <iostream>
#include <vector>
#include <exception>

const bool operator<(Valeur const &A, Valeur const &B) { return (A.getNombre() < B.getNombre()); };

class Echantillon
{
protected:
    std::vector<Valeur> ech;

public:
    Echantillon(){};
    ~Echantillon(){};
    int getTaille(void) const { return ech.size(); };
    void ajouter(Valeur val) { ech.push_back(val); };
    Valeur getMinimum(void)
    {
        if (ech.size() == 0){
            throw std::domain_error("Le vecteur est VIDE donc pas de MINIMUM");
        }
        return *min_element(ech.begin(), ech.end());
    };
    Valeur getMaximum(void)
    {
        if (ech.size() == 0)
            throw std::domain_error("Le vecteur est VIDE donc pas de MAXIMUM");
        return *max_element(ech.begin(), ech.end());
    };
    Valeur getValeur(unsigned int i)
    {
        if (i >= ech.size())
            throw std::out_of_range("Out");
        return ech[i];
    }
};

#endif