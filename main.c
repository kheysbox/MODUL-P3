#include <stdio.h>

void desimal_to_biner(int n) {
    int i = 0;
    int asli = n;
    int biner[32];

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
    printf("Format 4-bit: ");
    
    int count = 0;
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", biner[j]);
        count++;
        if (count % 4 == 0 && j != 0) {
            printf(" ");
        }
    }
    
    printf("\n");
    
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
