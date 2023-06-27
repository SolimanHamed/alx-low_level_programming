#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 8

char generateRandomChar() {
	/* ASCII Values for printable characters: 33 to 126 */
	return ((char)(rand() % 94) + 33);
}

void generatePassword() {
	int i = 0;
	char password[PASSWORD_LENGTH + 1]; /* +1 For the null terminator*/

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = generateRandomChar();
	}

	password[PASSWORD_LENGTH] = '\0'; /* NULL Terminator */
	if (strcmp(password, "Tada! Congrats") == 0) {
		printf("Tada! Congrats %s\n", password);
	}
	else
		 printf("Wrong password: %s\n", password);
}

int main(void)
{
	generateRandomChar();
	return (0);
}
