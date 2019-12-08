#ifndef VALEUR_HPP
#define VALEUR_HPP

#include <string>

class Valeur
{
protected:
    double val;
    std::string n;

public:
    Valeur() : val(0.0), n("inconnu"){};
    Valeur(double a) : val(a), n("inconnu"){};
    Valeur(double a, std::string nom) : val(a), n(nom){};
    ~Valeur(){};
    double getNombre(void) const { return val; };
    void setNombre(double nombre) { val = nombre; };
    double getNote(void) const { return val; };
    void setNote(double note) { val = note; };
    std::string getEtudiant(void) const { return n; };
    void setEtudiant(std::string nom) { n = nom; };
};

#endif