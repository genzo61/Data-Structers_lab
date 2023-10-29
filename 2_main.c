#include <stdio.h>
#include <stdlib.h>

// Karşılaştırma fonksiyonu
int karsilastirma(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int sayilar[100];
    int j;

    // Rastgele sayıları diziye ekleme işlemi
    for (j = 0; j < 100; j++) {
        sayilar[j] = rand() % 1000; 
    }

    // Sıralamadan önce sayıların ekranda gösterilme işlemi
    printf("Rastgele Sayilar:\n");
    for (j = 0; j < 100; j++) {
        printf("%d ", sayilar[j]);
    }

    // Sayıları büyükten küçüğe sırala
    qsort(sayilar, 100, sizeof(int), karsilastirma);

    // Sıralanmış sayıları ekrana bas
    printf("\nSirali Sayilar (Büyükten Küçüğe Doğru):\n");
    for (j = 0; j < 100; j++) {
        printf("%d ", sayilar[j]);
    }

    return 0;

    // Buradaki ödevde  rastgele sayı için rand() fonksiyonu sıralanması içinde qsort() fonksiyonunu kullandım.... 
}
