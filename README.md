#include <stdio.h>

void desimal_to_biner(int n) {
    int biner[32];
    int i = 0;
    int asli = n;

    // konversi ke biner
    while (n > 0) {
        biner[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Biner dari %d : ", asli);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", biner[j]);
    }
    printf("\n");

    // format 4 bit
    printf("4-bit: ");
    int count = 0;
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", biner[j]);
        count++;
        if (count % 4 == 0 && j != 0) {
            printf(" ");
        }
    }
    printf("\n");

    // cek genap atauganjil
    if (asli % 2 == 0)
        printf("Genap\n");
    else
        printf("Ganjil\n");
}

int main() {
    int angka;
    printf("Input nilai desimal: ");
    scanf("%d", &angka);

    desimal_to_biner(angka);
    return 0;
}
