// NOM    : MANIA
// PRENOM : ADIL

#ifndef __gangster_hpp__
#define __gangster_hpp__

#include <vector>
#include <exception>

class InconnuException : public std::exception
{
public:
    InconnuException() throw(){};
    virtual const char *what() const throw()
    {
        return "personnalite inconnue";
    }
    virtual ~InconnuException() throw()
    {
    }
};

class Personne
{
protected:
    const char *nom;

public:
    Personne() {}
    Personne(const char *mon_nom) : nom(mon_nom) {}
    ~Personne() {}
    const char *getNom(void) const { return nom; }
    void setNom(const char *x) { nom = x; }
    bool equals(const Personne &B) const { return strcmp(this->getNom(), B.getNom()); }
};

Personne INCONNU("INCONNU");

class Gangster : public Personne
{
private:
    static int nb;
    int id;
    int influence;

public:
    Gangster() : id(nb), influence(1) { nb++; }
    ~Gangster() {}
    int getId(void) const { return id; }
    int getInfluence(void) const { return influence; }
    void setInfluence(int mon_influence) { influence = mon_influence; }
    Personne getPersonne()
    {
        if (strcmp(this->getNom(), "inconnu"))
            throw InconnuException();
        return Personne(this->getNom());
    }
    void setPersonne(const Personne &P)
    {
        this->setNom(P.getNom());
    }
};

int Gangster::nb = 1;

class Chef : public Gangster
{
private:
    std::vector<Gangster *> m_chef;

public:
    Chef(){};
    ~Chef(){};
    void commande(Gangster *mon_gangster)
    {
        if (this->getInfluence() == 1)
        {
            this->setInfluence(10);
        }
        m_chef.push_back(mon_gangster);
        setInfluence(this->getInfluence() + mon_gangster->getInfluence());
    };
};

#endif
