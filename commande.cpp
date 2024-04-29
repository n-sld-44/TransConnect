#include "calendrier.h"
#include "commande.h"
#include "personne.h"

int Commande::nextId = 0;

Commande::Commande(int jour , std::string pa, std::string pb, Calendrier* C )
: calendrier(C) , jourLivraison(jour) , affectee(false) , id(nextId), etatLivraison (false) , pointA(pa) , pointB(pb) {
        nextId++;
        ajouterAuCalendrier();
    }
void Commande::attribuerChauffeur(Chauffeur *C){
    chauffeur = C;
    affectee = true;
}

void Commande::ajouterAuCalendrier(){


    if (this->calendrier->vectCalendrier.size()<=this->jourLivraison){
        this->calendrier->ajouterNJour(this->jourLivraison-this->calendrier->vectCalendrier.size()); // Ajout des jours entre le dernier jour enregistré et le jour de la commande
    }

    this->calendrier->vectCalendrier[this->jourLivraison]->ajouterCommande(this);



}
