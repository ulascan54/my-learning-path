/*
Bir dizideki ardışık sayıların toplamını hesaplayan bir C programı yazın. Dizi boyutu ve elemanları kullanıcıdan alınmalıdır. Program, bu toplamı hesaplamak için bir özyineleme (recursive) işlev kullanmalıdır.
*/

#include <stdio.h>

int calculateSum(int arr[], int size)
{
    if (size == 0)
    {
        return arr[0];
    }
    else
        return arr[size] + calculateSum(arr, size - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("%d. elemanı giriniz -> ", (i + 1));
        scanf("%d", &arr[i]);
    }

    int sum = calculateSum(arr, n - 1);

    printf("Toplam -> %d ", sum);

    return 0;
}
