#include <stdio.h>

int main(void) {
    int num_prodotti;
    float prezzo_unitario, totale, eccedenza_50 = 0, eccedenza_100 = 0, importo_sconto;
    printf("Inserisci il numero di prodotti acquistati: ");
    scanf("%d", &num_prodotti);
    printf("Inserisci il prezzo unitario dei prodotti: ");
    scanf("%f", &prezzo_unitario);
    totale = num_prodotti * prezzo_unitario;
    if (totale > 100) {
        eccedenza_100 = totale - 100;
        eccedenza_50 = 50;
    } else if (totale > 50) {
        eccedenza_50 = totale - 50;
    }
    importo_sconto = (eccedenza_50 * 0.10) + (eccedenza_100 * 0.20);
    float totale_scontato = totale - importo_sconto;
    printf("Totale senza sconto: %.2f euro\n", totale);
    printf("Sconto applicato: %.2f euro\n", importo_sconto);
    printf("Totale con sconto: %.2f euro\n", totale_scontato);

    return 0;
}
