#include "calendrier.h"

int Jour::jourSuivant=0;

void Jour::ajouterCommande(Commande * commande){
    commandeNonAffectee.push_back(commande);
}



void Calendrier::ajouterNJour(int n){
    for(int i =0;i<n;i++){
        Jour* J = new Jour();
        vectCalendrier.push_back(J);
    }
}
