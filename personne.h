#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED

#include <string>
#include <vector>

class Commande;

class Personne {

protected:
    static int         nextSs;

    const int          numSecu;
    const std::string        nom;
    const std::string  prenom;
    const int          dateNaissance;
    int                numeroTel;
    std::string        adressePostale;
    std::string        adresseMail;

public:
    Personne( std::string name, std::string surname, int dateN, int num, std::string adresseP, std::string adresseM) : numSecu(nextSs), prenom(surname), dateNaissance(dateN), nom(name) , numeroTel(num), adressePostale(adresseP) , adresseMail(adresseM) {
        nextSs++;
    };

    Personne() = delete;

    ~Personne();

    void set_numeroTel(int num);
    void set_adressePostale( std::string adressP);
    void set_adresseMail(std::string adresseM);
};

class Salarie : public Personne {

protected:
    std::string poste;
    int         salaire;
    const int   anneeEntreprise;


public:
    Salarie() = delete;
    Salarie(std::string name, std::string surname, int dateN, int num, std::string adresseP, std::string adresseM ,std::string p, int s, int a) : Personne(name,surname,dateN,num,adresseP,adresseM) , poste(p), salaire(s), anneeEntreprise(a) {};
    ~Salarie();

};

class Chauffeur : public Salarie {
    bool disponible;

};


class Client : public Personne {

public:
    std::vector <Commande*> historique;



};




#endif // PERSONNE_H_INCLUDED
