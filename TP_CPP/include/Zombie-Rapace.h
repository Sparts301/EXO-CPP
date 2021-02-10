#ifndef ZOMBIE-RAPACE_H
#define ZOMBIE-RAPACE_H


class Zombie_Rapace
#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Zombie_Rapace
{
    private:


        //DESTRUCTEUR

    protected:

        int pv=45;
        int degats=5;
        string nom= "Default";

    public:
//CONSTRUCTEURS
        Zombie_Rapace();


//DESTRUCTEUR
        ~Zombie_Rapace();


//GETTER SETTER PV
	int getPv() const;
	void setPv(int s);

    //GETTER SETTER NOM
	string getNom() const;
	void setNom(string n);

    //GETTER SETTER DEGATS
	int getDegats() const;
	void setDegats(int d);


    void showInfos() const;
};

#endif // ZOMBIE-RAPACE_H

