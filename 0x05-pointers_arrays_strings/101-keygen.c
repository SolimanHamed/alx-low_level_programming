#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define PASSWORD_LENGTH 90

int main(void)
{
	int i = 0;
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];

	for (i = 0; i < PASSWORD_LENGTH; i++)
		password[i] = '!' + rand() % 94;
	password[PASSWORD_LENGTH] = '\0'; // Null terminator
	
	printf("Tada! Congrats\n");
}
