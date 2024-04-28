#include "personne.h"

int Personne::nextSs =0;

void Personne::set_adressePostale(std::string pos){
    this->adressePostale = pos;
}

void Personne::set_adresseMail(std::string mail){
    this->adresseMail = mail;
}



