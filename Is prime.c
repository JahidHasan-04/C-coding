#include <stdio.h>
int main(){
    int n,i,s=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        s=1;
    } else {
        for (i=2;i<=n/2; i++) {
            if (n % i ==0) {
                s = 1;
                break;
                
            }
        }
    }
   if (s==0)
printf("%d is a prime number", n);
else
printf("%d is not a prime number", n);
return 0;
}
