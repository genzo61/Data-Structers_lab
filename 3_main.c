#include <stdio.h>
#include <string.h>

// Struct oluşturma
struct Ogrenci {
    int numara;
    char isim[50];
    int yas;
};
int ogrenciAra(struct Ogrenci ogrenciler[], int toplamOgrenci,char arananIsim[]) {
    for (int i = 0; i < toplamOgrenci; i++) {
        if (strcmp(ogrenciler[i].isim, arananIsim) == 0) {
            return i; // Öğrenci bulundu.
        }
    }
    return -1; // Öğrenci bulunamadı
}
int main() {
    // öğrenci bilgileri için bir dizi oluşturma
    struct Ogrenci ogrenciler[100];
    int toplamOgrenci = 0;

    // Örnek öğrenci bilgilerini diziye ekle
    ogrenciler[toplamOgrenci].numara = 1;
    strcpy(ogrenciler[toplamOgrenci].isim, "Ahmet");
    ogrenciler[toplamOgrenci].yas = 20;
    toplamOgrenci++;

    ogrenciler[toplamOgrenci].numara = 2;
    strcpy(ogrenciler[toplamOgrenci].isim, "Ayşe");
    ogrenciler[toplamOgrenci].yas = 22;
    toplamOgrenci++;
    // Aranacak Öğrenciyi belirleme işlemi
    char arananIsim[50];
    printf("Aranacak Öğrenci Adını Girin: ");
    scanf("%s", arananIsim);
    //belirlenen kayıtı arama işlemi
    int indis = ogrenciAra(ogrenciler, toplamOgrenci, arananIsim);
    // Öğrenci bilgilerini döngü ile ekrana yazma ve sayma işlemi
    for (int i = 0; i < toplamOgrenci; i++) {
        printf("Öğrenci No: %d\n", ogrenciler[i].numara);
        printf("Öğrenci Adı: %s\n", ogrenciler[i].isim);
        printf("Öğrenci Yaşı: %d\n", ogrenciler[i].yas);
        printf("\n");
    }
    // Kayıtı bulunan öğrencinin ekrana yazılma işlemi
     if (indis != -1) {
        printf("Öğrenci No: %d\n", ogrenciler[indis].numara);
        printf("Öğrenci Adı: %s\n", ogrenciler[indis].isim);
        printf("Öğrenci Yaşı: %d\n", ogrenciler[indis].yas);
    } else {
        printf("Öğrenci bulunamadı.\n");
    }

    printf("Toplam Öğrenci Sayısı: %d\n", toplamOgrenci);

    return 0;

    // 4.kısımda hata aldığım ve çözemediğimden dolayı yazmadım.
}
