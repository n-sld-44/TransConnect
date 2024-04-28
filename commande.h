#ifndef COMMANDE_H_INCLUDED
#define COMMANDE_H_INCLUDED

#include <string>
class Chauffeur; //forward declaration

class Commande{

private:
    static int nextId;
    const int id;
    int jourLivraison;
    bool affectee; //Chauffeur déclaré: True
    bool etatLivraison; //Livrée: True
    const std::string pointA;
    const std::string pointB;
    int prix;
    Chauffeur* chauffeur;

public:
    Commande(int jour , std::string pa, std::string pb) : jourLivraison(jour) id(nextId++) , affectee(false) , etatLivraison (false) , pointA(pa) , pointB(b) {

    }

    void attribuerChauffeur(Chauffeur* C);







};



#endif // COMMANDE_H_INCLUDED
