#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator

    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        // Generate a random character between '!' and '~'
        password[i] = '!' + rand() % 94;
    }

    password[PASSWORD_LENGTH] = '\0'; // Null terminator

    printf("%s\n", password);
    printf("Tada! Congrats\n");

    return 0;
}

