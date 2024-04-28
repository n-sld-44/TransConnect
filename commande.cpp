#include "calendrier.h"
#include "commande.h"
#include "personne.h"


Commande::Commande(int jour , std::string pa, std::string pb, Calendrier* C )
: calendrier(C) , jourLivraison(jour),  id(nextId++) , affectee(false) , etatLivraison (false) , pointA(pa) , pointB(pb) {

        ajouterAuCalendrier();
    }
void Commande::attribuerChauffeur(Chauffeur *C){
    chauffeur = C;
}

void Commande::ajouterAuCalendrier(){
    Jour* ptr = nullptr;
    ptr  = calendrier->cal[jourLivraison];


}
