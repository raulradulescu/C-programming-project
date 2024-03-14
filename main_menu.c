#include <stdio.h>

int main()
{
    int i, j;
    char message[] = "Welcome to the Bank management system.";
    int width = 60;
    int height = 20;

    // Print the top border
    for (i = 0; i < width; i++) {
        printf("_");
    }
    printf("\n");

    // Print the sides and message
    for (i = 0; i < height; i++) {
        printf("|");
        if (i == height / 2) {
            int padding = (width - sizeof(message) - 1) / 2;
            for (j = 0; j < padding; j++) {
                printf(" ");
            }
            printf("%s", message);
            for (j = 0; j < padding; j++) {
                printf(" ");
            }
        } else {
            for (j = 0; j < width - 2; j++) {
                printf(" ");
            }
        }
        printf("|\n");
    }

    

    return 0;
}