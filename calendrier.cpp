#include "calendrier.h"

void Jour::ajouterCommande(Commande * commande){
    commandeNonAffectee.push_back(commande);
}

