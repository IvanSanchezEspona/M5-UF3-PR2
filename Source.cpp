#include  <iostream>
#include "Enemigo.h"
#include "FinalBoss.h"
using namespace std;

int main() {
	Enemigo Normal(50, "Goomba", 50, 300);

	FinalBoss Final(1000, "Bowser", 500, 200, 1000, 800);

	return 0;
}