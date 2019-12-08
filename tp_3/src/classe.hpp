#ifndef CLASSE_HPP
#define CLASSE_HPP

class Classe
{
protected:
    double b_inf;
    double b_sup;
    unsigned quantite;

public:
    Classe() : b_inf(0.0), b_sup(0.0), quantite(0.0){};
    Classe(double bi, double bs) : b_inf(bi), b_sup(bs), quantite(0.0){};
    Classe(double bi, double bs, unsigned q) : b_inf(bi), b_sup(bs), quantite(q){};
    ~Classe(){};
    double getBorneInf(void) const { return b_inf; };
    void setBorneInf(double n) { b_inf = n; };
    double getBorneSup(void) const { return b_sup; };
    void setBorneSup(double n) { b_sup = n; };
    unsigned getQuantite(void) const { return quantite; };
    void setQuantite(unsigned n) { quantite = n; };
    void ajouter(void) { quantite++; }
};

#endif