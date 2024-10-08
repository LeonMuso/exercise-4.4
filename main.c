#include <stdio.h>

int main(void) {

        int voto, somma = 0, count = 0;
        float media;
        while(1) {
            printf("Inserisci un voto (0 per terminare): ");
            scanf("%d", &voto);

            if (voto == 0) {
                break;
            }
            somma += voto;
            count++;
        }if (count > 0) {
            media = (float)somma / count;
            printf("La media dei voti e': %.2f\n", media);
        } else {
            printf("Non sono stati inseriti voti.\n");
        }
        return 0;
    }

