#include <stdio.h>
#include <string.h> 

int main() {
    char result[50];

    printf("Input match result (win/loss/draw): ");
    scanf("%s", result);

    if (strcmp(result, "win") == 0) {
        printf("FIFA is rigged\n");
    } else {
        printf("FIFA is fair\n");
    }

    return 0;
}