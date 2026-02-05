#include <stdio.h>
int gcd(int p, int q) {
    if (q == 0)
    return p;
    return gcd(q, p%q);
}
int main() {
    int p, q;
    printf("enter two numbers: ");
    scanf("%d %d", &p, &q);
    printf("gcd of %d and %d is %d\n", p, q, gcd(p, q));

    
}
