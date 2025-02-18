#include <stdio.h>

int main() {
    int a = (4 > 3) && (3 > 2);
    int b  = (2 + 3) > (4 + 5);
    int c = (6 > (3 + 2)) && ((3 + 2) < 5);

    if (a) {
        printf("4 > 3 > 2 is True\n");
    } else {
        printf("4 > 3 > 2 is False\n");
    }

    if (b) {
        printf("2 + 3 > 4 + 5 is True\n");
    } else {
        printf("2 + 3 > 4 + 5 is False\n");
    }

    if (c) {
        printf("6 > 3 + 2 < 5 is True\n");
    } else {
        printf("6 > 3 + 2 < 5 is False\n");
    }

    return 0;
}
