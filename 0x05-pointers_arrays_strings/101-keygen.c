#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PASSWORD_LENGTH 10

char* generate_password(int length) {
    char* password = (char*)malloc((length + 1) * sizeof(char));
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_+=";
    int charset_length = strlen(charset);
    
    srand(time(NULL));
    for (int i = 0; i < length; i++) {
        int random_index = rand() % charset_length;
        password[i] = charset[random_index];
    }
    password[length] = '\0';
    
    return password;
}

int is_valid_password(const char* password) {
    // Insert your validation logic for 101-crackme password here
    // Return 1 if the password is valid, otherwise return 0
}

int main() {
    int password_length = PASSWORD_LENGTH;
    char* password = generate_password(password_length);
    
    while (!is_valid_password(password)) {
        free(password);
        password = generate_password(password_length);
    }
    
    printf("Tada! Congrats\n");
    printf("Generated Password: %s\n", password);
    
    free(password);
    
    return 0;
}

