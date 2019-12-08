#ifndef HISTOGRAMME_HPP
#define HISTOGRAMME_HPP

#include <echantillon.hpp>
#include <classe.hpp>

class Histogramme
{
public:
    typedef std::vector<Classe> classes_t;

private:
    double h_inf;
    double h_sup;
    double h_nom;
    classes_t hist;

public:
    Histogramme(){};
    Histogramme(double hi, double hs, double n) : h_inf(hi), h_sup(hs), h_nom(n)
    {
        double intervalle = (h_sup - h_inf) / n;
        for (unsigned i = 0; i < h_nom; ++i)
            hist.push_back(Classe(h_inf + intervalle * i, h_inf + intervalle * (i + 1)));
    };
    ~Histogramme(){};
    const classes_t &getClasses(void) const { return hist; };
    /*void ajouter(const Echantillon &echantillon)
    {
        for (unsigned i = 0; i < echantillon.getTaille(); ++i)
            echantillon.ajouter(echantillon.getValeur(i));
    };*/
};

#endif