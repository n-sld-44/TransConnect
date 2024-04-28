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
    Jour(std::vector <Commande*> newVect1,std::vector <Commande*> newVect2): id(jourSuivant++) , commandeAffectee(newVect1) , commandeNonAffectee(newVect2) {} ;

    void ajouterCommande( Commande * commande);

    void affectationCommande ();


class Calendrier{

private:
    std::vector <Jour*> cal;

public:
    Calendrier(std::vector <Jour*> newVect) :  cal(newVect) {};

    ~Calendrier();

};


};
#endif // CALENDRIER_H_INCLUDED
