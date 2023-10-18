/*

Soru 1:
C programlama dilinde "printf" işlevinin kullanımını açıklayın ve bir örnek verin.

Cevap 1:


"printf" işlevi, ekrana verileri yazdırmak için kullanılır. Özellikle metin dizileri ve değişkenleri ekrana yazdırmak için kullanılır. İşte bir örnek:

```c
#include <stdio.h>

int main() {
    int sayi = 42;
    printf("Merhaba, dünya! Favori sayım: %d\n", sayi);
    return 0;
}
Bu program, "sayi" değişkeninin değerini ekrana yazdırır.

Soru 2:
Bir C programında "scanf" işlevinin kullanımını açıklayın ve bir örnek verin.

Cevap 2:


"scanf" işlevi, kullanıcıdan veri almak için kullanılır. Kullanıcıdan veri almak için format belirleyici kullanılır. İşte bir örnek:

```c
#include <stdio.h>

int main() {
    int sayi;
    printf("Bir tamsayı girin: ");
    scanf("%d", &sayi);
    printf("Girdiğiniz sayı: %d\n", sayi);
    return 0;
}
Bu program, kullanıcıdan bir tamsayı alır ve bu sayıyı ekrana yazdırır.

Soru 3:
C dilinde "if" ve "else if" ifadelerini kullanarak bir karar yapısı oluşturun. Bir örnek verin.

Cevap 3:


#include <stdio.h>

int main() {
    int sayi;
    printf("Bir tamsayı girin: ");
    scanf("%d", &sayi);

    if (sayi > 0) {
        printf("Pozitif bir sayı girdiniz.\n");
    } else if (sayi < 0) {
        printf("Negatif bir sayı girdiniz.\n");
    } else {
        printf("Sıfır girdiniz.\n");
    }

    return 0;
}
Bu program, kullanıcının girdiği sayının pozitif, negatif veya sıfır olduğunu kontrol eder ve sonuca göre bir çıktı verir.

Soru 4:
C dilinde bir "while" döngüsü nasıl kullanılır? Bir örnek verin.

Cevap 4:


#include <stdio.h>

int main() {
    int sayac = 1;

    while (sayac <= 5) {
        printf("%d ", sayac);
        sayac++;
    }

    printf("\n");

    return 0;
}
Bu program, 1'den 5'e kadar olan sayıları ekrana yazdırmak için bir "while" döngüsü kullanır.

Soru 5:
C dilinde bir fonksiyonun nasıl tanımlandığını ve çağrıldığını açıklayın. Bir örnek verin.

Cevap 5:
Fonksiyon tanımlamak için "fonksiyon_adı"() şeklinde bir şablon kullanılır. Fonksiyonu çağırmak için ise "fonksiyon_adı"() şeklinde kullanılır. İşte bir örnek:


#include <stdio.h>

// Fonksiyon tanımı
int topla(int a, int b) {
    return a + b;
}

int main() {
    int sayi1 = 5, sayi2 = 7;
    int sonuc;

    // Fonksiyon çağrısı
    sonuc = topla(sayi1, sayi2);

    printf("Toplam: %d\n", sonuc);

    return 0;
}
Bu program, "topla" adlı bir fonksiyon tanımlar ve bu fonksiyonu çağırarak iki sayının toplamını hesaplar.

Soru 6:
C dilinde bir işaretçinin kullanımını açıklayın ve bir örnek verin.

Cevap 6:
İşaretçiler (pointers), bir değişkenin bellek adresini saklayabilen değişkenlerdir. İşaretçiler, verilere dinamik olarak erişim sağlamak için kullanılır. İşte bir örnek:


#include <stdio.h>

int main() {
    int sayi = 42;
    int *sayi_ptr;

    sayi_ptr = &sayi;

    printf("Değişkenin değeri: %d\n", sayi);
    printf("İşaretçi ile değişkenin değeri: %d\n", *sayi_ptr);

    return 0;
}
Bu program, bir işaretçi kullanarak bir tamsayının değerini ve bellek adresini gösterir.

Soru 7:
C dilinde dinamik bellek tahsisi (allocation) ve serbest bırakma (deallocation) nasıl yapılır? Bir örnek verin.

Cevap 7:
Dinamik bellek tahsis etmek için "malloc" işlevi kullanılır ve serbest bırakmak için "free" işlevi kullanılır. İşte bir örnek:


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *dizi;
    int boyut = 5;

    // Dinamik bellek tahsis et
    dizi = (int *)malloc(boyut * sizeof(int));

    if (dizi == NULL) {
        printf("Bellek tahsisi başarısız.\n");
        return 1;
    }

    // Belleği kullan
    for (int i = 0; i < boyut; i++) {
        dizi[i] = i * 2;
    }

    // Belleği serbest bırak
    free(dizi);

    return 0;
}
Bu program, "malloc" işlevi ile dinamik bellek tahsis eder ve ardından "free" işlevi ile belleği serbest bırakır.

*/