#include <stdio.h>

int main() {
    int n, i, num[10];

    printf("Enter how many numbers you want to check: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    printf("\nResults:\n");
    for (i = 0; i < n; i++) {
        if (num[i] % 2 == 0)
            printf("%d is Even\n", num[i]);
        else
            printf("%d is Odd\n", num[i]);
    }

    return 0;
}


