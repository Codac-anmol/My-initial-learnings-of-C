//factorial

#include <stdio.h>
int factorial(int n) {
    if (n == 1 || n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main(void) {
    char r = 'n';

    while (r == 'n') {
        int x;
        printf("Enter the number you want the factorial of: ");
        scanf("%d", &x);

        printf("Factorial of %d is %d\n\n", x, factorial(x));

        printf("Press 'n' to find for another number and 'x' to stop the program: ");
        scanf(" %c", &r);
        printf("\n");
    }

    return 0;
