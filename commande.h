#ifndef COMMANDE_H_INCLUDED
#define COMMANDE_H_INCLUDED

#include <string>
class Chauffeur; //forward declaration
class Calendrier;

class Commande{

private:
    static int nextId;
    const int id;
    const int jourLivraison; //Politique de la boite, on ne peux pas changer la date de livraison
    bool affectee; //Chauffeur déclaré: True
    bool etatLivraison; //Livrée: True
    const std::string pointA;
    const std::string pointB;
    int prix;
    Chauffeur* chauffeur;
    Calendrier* calendrier;


public:
    Commande(int jour , std::string pa, std::string pb, Calendrier* C );

    void attribuerChauffeur(Chauffeur *C);
    void ajouterAuCalendrier();









};



#endif // COMMANDE_H_INCLUDED
