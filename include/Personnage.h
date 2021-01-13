#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>
#include <iostream>

using namespace std;

class Personnage
{
private:
	int pv = 100;
	string nom = "Bob";
	int attack = 10;
	int defense = 10;
	float percentCrit = 0.1f;

public:
    //CONSTRUCTEURS
    Personnage();
    Personnage(int p, int a, float pc);
    Personnage(string n);

    //GETTER/SETTER PV
	int getPv();
	void setPv(int s);

    //GETTER/SETTER NOM
	string getNom();
	void setNom(string n);

    //GETTER/SETTER ATTACK
	int getAttack();
	void setAttack(int a);

    //GETTER/SETTER DEFENSE
	int getDefense();
	void setDefense(int d);

    //GETTER/SETTER PERCENT CRIT
	float getPercentCrit();
	void setPercentCrit(float d);

    //AFFICHE LES INFOS DU PERSO
	void showInfos();

};

#endif // PERSONNAGE_H
