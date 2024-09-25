#include <stdio.h>

int main() {
    int a;

     printf("inserisci un numero intero:\n");
     scanf("%d", &a);

     if(a%2==0) {
         printf("il numero %d e' pari",a);
     }
    else {
         printf("il numero %d e' dispari",a);
     }

    return 0;
}
