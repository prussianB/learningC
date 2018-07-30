#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main() {

	int time = 0;
	int i = 0;
	int price;
	float monsterHP = 1000, gold = 500;
	char chosenWep[2];

	char weapons[5] = { 'a', 'b', 'c' };


	while (1) {
		printf("Choose yer mighty weapon! \n");
		printf("It will help you defeat the beast that plagues this lands.\n");
		printf("You have %.0f g.\n", gold);
		printf("(a)Epic sword: 521.3 dps Price: 12532g \t");
		printf("(b)Rusty axe: 121.7 dps Price: 520g \t");
		printf("(c)Stick: 31.4 dps Price: 62g\n");

		while (i == 0) {
			scanf(" %c", chosenWep);

			if (chosenWep == weapons[0]) {
				price = 12532;
			}
			else if (chosenWep == weapons[1]) {
				price = 520;
			}
			else {
				price = 62;
			}

			if (price <= gold) {
				gold = gold - price;
				printf("You have bought the weapon. You have %.0f g left\n", gold);
				i++;
			}
			else {
				printf("You don't have enough gold.\n");
				printf("You have 500g.\n");
				printf("(a)Epic sword: 521.3 dps Price: 12532g \t");
				printf("(b)Rusty axe: 121.7 dps Price: 520g \t");
				printf("(c)Stick: 31.4 dps Price: 62g\n");
			}
		}

		i = 0;

		//This part assigns the damage you will apply to the monster.

		float dps;
		if (chosenWep == weapons[0]) {
			dps = 521.3;
		}
		else if (chosenWep == weapons[1]) {
			dps = 121.7;
		}
		else {
			dps = 31.4;
		}

		//...........................................................

		while (monsterHP > 0) {
			monsterHP = monsterHP - dps;
			time++;
			if (monsterHP >= 0){
				printf("The monster has %.1f health left.\n", monsterHP);
				Sleep(200);
			}
			else {
				printf("The monster has 0 health left.\n");
				Sleep(200);
			}
		}

		printf("*Monster dies* 653g.\n");
		gold = gold + 653;
		printf("Monster killed in %d seconds.\n", time);
		printf("Congratulations! You have killed the vile beast and saved the town.");

		monsterHP = 1000;
		time = 0;

	}
	getch();
	return 0;
}