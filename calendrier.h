#ifndef CALENDRIER_H_INCLUDED
#define CALENDRIER_H_INCLUDED

#include <vector>

class Chauffeur;
class Commande;

class Jour{
private:
    static int jourSuivant;
    const int id;
    std::vector <Chauffeur*> chauffeurDispo;
    std::vector <Commande*> commandeAffectee;
    std::vector <Commande*> commandeNonAffectee;

public:
    Jour() : id(jourSuivant++) {};

    void ajouterCommande( Commande* commande);

    void affectationCommande ();

};


class Calendrier{



public:
    std::vector <Jour*> vectCalendrier;

    Calendrier() ;

    ~Calendrier();

    void ajouterNJour(int n);


};
#endif // CALENDRIER_H_INCLUDED
