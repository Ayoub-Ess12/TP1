#include <stdio.h>

int main() {

    int multip=0 ;

    for (int i = 1; i <= 9 ; i++) {
        printf("*************table-->%d**********\n",i);

        for (int j = 1; j <= 10 ; ++j) {
            printf("%d ",i*j);

        }

        printf("\n");
    }

    return 0;
}
