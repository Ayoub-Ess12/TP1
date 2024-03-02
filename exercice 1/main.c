#include <stdio.h>

int main() {

    float note, max = 0, min = 21, i = 0, c = 0;

    do {
        printf("veuillez entre la note :");
        scanf("%f", &note);
        if (note >= 0 && note <= 20) {
            if (note > max) {
                max = note;
                i = 1;
            } else if (note == max) {
                i++;
            }
            if (note < min) {
                min = note;
                c = 1;
            } else if (note == min) {
                c++;
            }
        } else {
            printf("note invalide !!");
        }
    } while (note != -1);
    printf("max = %.2f attribuee %.2f fois ", max, i);
    printf("min = %.2f attribuee %.2f fois ", min, c);

    hhhhhhhhhhhhh

    return 0;
}
