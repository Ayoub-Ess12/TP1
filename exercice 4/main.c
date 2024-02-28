#include <stdio.h>
#include <math.h>

int main() {
    int nb, exp, i ;

    printf("veuillez entre un nombre :");
    scanf("%d",&nb);

    for ( i = 0; i < nb / 2; i++) {
        if (nb == pow(3, i)) {
            exp = i;
            break;
        }
    }

    if (nb != pow(3, i)) {
        printf("%d n'est pas puissance de 3", nb);
    }
    else
        printf("le nombre %d est une puissance de 3 et s'ecrit : 3^%d", nb, exp);

    return 0;
}
