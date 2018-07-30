

#include <stdlib.h>
#include <stdio.h>
#include "baranInfo.h"

int main() {

	int i;

	struct userInfo user1;
	struct userInfo user2;
	struct userInfo user3;
	struct userInfo user4;

	user1.userID = 2172289;
	user2.userID = 2175869;
	user3.userID = 2136911;
	user4.userID = 2140298;

	user1.age = 25;
	user2.age = 31;
	user3.age = 42;
	user4.age = 24;

	user1.weight = 93,5;
	user2.weight = 78,1;
	user3.weight = 63,9;
	user4.weight = 81,4;

	printf("Enter the first name of user 1.\n");
	scanf("%s",user1.firstName);
	printf("Enter the last name of user 1.\n");
	scanf("%s", user1.lastName);

	printf("Enter the first name of user 2.\n");
	scanf("%s", user2.firstName);
	printf("Enter the last name of user 2.\n");
	scanf("%s", user2.lastName);

	printf("Enter the first name of user 3.\n");
	scanf("%s", user3.firstName);
	printf("Enter the last name of user 3.\n");
	scanf("%s", user3.lastName);

	printf("Enter the first name of user 4.\n");
	scanf("%s", user4.firstName);
	printf("Enter the last name of user 4.\n");
	scanf("%s", user4.lastName);

	printf("user1: %d \t %s \t %s \t %d \t %.1f \n", user1.userID, user1.firstName, user1.lastName, user1.age, user1.weight);
	printf("user2: %d \t %s \t %s \t %d \t %.1f \n", user2.userID, user2.firstName, user2.lastName, user2.age, user2.weight);
	printf("user3: %d \t %s \t %s \t %d \t %.1f \n", user3.userID, user3.firstName, user3.lastName, user3.age, user3.weight);
	printf("user4: %d \t %s \t %s \t %d \t %.1f \n", user4.userID, user4.firstName, user4.lastName, user4.age, user4.weight);



	getch();
	return 0;

	}
