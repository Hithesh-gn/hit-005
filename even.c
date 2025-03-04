#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d yes.\n", num);
    } else {
        printf("%d no.\n", num);
    }

    return 0;
}

