#ifndef CALENDRIER_H_INCLUDED
#define CALENDRIER_H_INCLUDED

#include <vector>

class Chauffeur;
class Commande;

class Calendrier{

private:
    std::vector <Jour*> calendrier;

public:
    Calendrier();

    ~Calendrier();

};

class Jour{
private:
    static int jourSuivant;
    const int id;
    std::vector <Chauffeur*> chauffeurDispo;
    std::vector <Commande*> commandeAffectee;
    std::vector <Commande*> commandeNonAffectee;

public:
    Jour(): id(jourSuivant++) {} ;

    void affectationCommande ()
};
#endif // CALENDRIER_H_INCLUDED
