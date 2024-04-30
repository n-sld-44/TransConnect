#ifndef ENTREPRISE_H_INCLUDED
#define ENTREPRISE_H_INCLUDED

#include <vector>

class Chauffeur;

class Entreprise{

public:
    static Entreprise& Instance();

private:
    Entreprise& operator= (const Entreprise&) {}
    Entreprise (const Entreprise) {}

    static Entreprise e_instance;
    Entreprise();
    ~Entreprise();
};


#endif // ENTREPRISE_H_INCLUDED
