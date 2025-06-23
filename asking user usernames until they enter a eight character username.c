#include <stdio.h>
#include <string.h>
int main() {
    char username[69];

    while (1) {
        printf("Enter a username (at least 8 characters): ");
        scanf("%s", username);

        if (strlen(username) >= 8) {
            break;
        } else {
            printf("Username too short! Please try again.\n");
        }
    }

    printf("Username accepted: %s\n", username);

    return 0;
}

