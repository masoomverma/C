#include <stdio.h>
int main() 
{
    int n;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    int sum = n * (n + 1) / 2;
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}
