#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

int main() {
char password[PASSWORD_LENGTH + 1]; // +1 for null terminator
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
srand(time(NULL)); // Seed random number generator with current time
for (int i = 0; i < PASSWORD_LENGTH; i++) {
password[i] = charset[rand() % sizeof(charset)];
}
password[PASSWORD_LENGTH] = '\0'; // Add null terminator to end of password string
printf("Generated password: %s\n", password);
return 0;
}
