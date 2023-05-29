#include "FinalBoss.h"
#include  <iostream>
using namespace std;

FinalBoss::FinalBoss(int pHP,
	std::string pNAME,
	int pATTACK,
	int pDEFENSE,
	bool pFireAttack,
	int pFrozenAttack) : Enemigo(pHP,
		pNAME,
		pATTACK,
		pDEFENSE) {
	fireAttack = pFireAttack;
	frozenAttack = pFrozenAttack;

}
	//GETTERS AND SETTERS
	int FinalBoss::getFireAttack() {
		return fireAttack;
	}

	int FinalBoss::getFrozenAttack() {
		return frozenAttack;
	}

	void FinalBoss::setFireAttack(int pFireAttack) {
		fireAttack == pFireAttack;
	}

	void FinalBoss::setFrozenAttack(int pFrozenAttack) {
		frozenAttack == pFrozenAttack;
	}
	//METODOS PROPIOS
	void FinalBoss::printStatus() {
		cout << "El nombre del enemigo final es " << getNAME() << endl;
	}
