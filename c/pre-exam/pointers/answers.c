/*



Soru 1 Cevabı:
#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *sum_ptr = &sum;

    printf("İlk tamsayıyı girin: ");
    scanf("%d", &num1);

    printf("İkinci tamsayıyı girin: ");
    scanf("%d", &num2);

    *sum_ptr = num1 + num2;

    printf("Toplam: %d\n", *sum_ptr);

    return 0;
}
Soru 2 Cevabı:

#include <stdio.h>

int main() {
    char str[100];
    printf("Bir karakter dizisi girin: ");
    gets(str);

    int count = 0;
    char *str_ptr = str;

    while (*str_ptr != '\0') {
        count++;
        str_ptr++;
    }

    printf("Karakter sayısı: %d\n", count);

    return 0;
}
Soru 3 Cevabı:

#include <stdio.h>

int main() {
    int arr[] = {12, 5, 7, 23, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int max_index = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
    }

    int *max_ptr = &max_index;

    printf("En büyük eleman: %d (Dizi içindeki indis: %d)\n", max, *max_ptr);

    return 0;
}
Soru 4 Cevabı:

#include <stdio.h>

int main() {
    int arr1[] = {2, 4, 6, 8, 10};
    int arr2[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int sum[size];

    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    int *sum_ptr = sum;

    printf("Toplam dizisi: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(sum_ptr + i));
    }
    printf("\n");

    return 0;
}
Soru 5 Cevabı:

#include <stdio.h>
#include <string.h>

void reverseArray(int arr[], int size) {
    int left = 0, right = size - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Orjinal dizi: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, size);

    printf("\nTers çevrilmiş dizi: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
Soru 6 Cevabı:

#include <stdio.h>

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Orjinal dizi: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    sortArray(arr, size);

    printf("\nSıralanmış dizi: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
Soru 7 Cevabı:

#include <stdio.h>

int main() {
    int num1, num2;
    int *divisors1 = NULL;
    int *divisors2 = NULL;

    printf("İlk tamsayıyı girin: ");
    scanf("%d", &num1);
    printf("İkinci tamsayıyı girin: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Pozitif tamsayılar girmelisiniz.\n");
        return 1;
    }

    int count1 = 0;
    int count2 = 0;

    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0) {
            divisors1 = (int *)realloc(divisors1, (count1 + 1) * sizeof(int));
            divisors1[count1] = i;
            count1++;
        }
    }

    for (int i = 1; i <= num2; i++) {
        if (num2 % i == 0) {
            divisors2 = (int *)realloc(divisors2, (count2 + 1) * sizeof(int));
            divisors2[count2] = i;
            count2++;
        }
    }

    printf("%d böleni: ", num1);
    for (int i = 0; i < count1; i++) {
        printf("%d ", divisors1[i]);
    }
    printf("\n");

    printf("%d böleni: ", num2);
    for (int i = 0; i < count2; i++) {
        printf("%d ", divisors2[i]);
    }
    printf("\n");

    free(divisors1);
    free(divisors2);

    return 0;
}
Bu programlar, ilgili konuları anlamanıza ve uygulamanıza yardımcı olacaktır.


*/