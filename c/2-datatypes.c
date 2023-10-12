#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char a = 'C';                 // single character %c
    char b[] = "ULASI";           // Array of characters %s
    float c = 3.1415;             // 4 bytes (32 bit of precision) 6-7 digits %f
    double d = 3.1415926533;      // 8 bytes (64 bit of precision) 15-16 digits %lf
    bool e = true;                // 1 byte (true or false) %d
    char f = 100;                 // 1 byte (-128 to 127) %c or %d
    unsigned char g = 100;        // 1 byte (0 to 255) %c or %d
    short int h = 3275;           // 2 bytes (-32768 to 32767) %d
    unsigned short int i = 65535; // 2 bytes (0 to 65535) %d
    short x = 0;                  // we can use that instead
    unsigned short o = 0;
    int j = 2147483647;                              // 4 bytes (-2,147,483,648 %d to 2,147,483,647) %d
    unsigned int k = 2147483647;                     // 4 bytes (0  to 4,284,967,295) %u
    long long int l = 929332904093123123;            // 8 bytes (-9quintillion to 9quintillion) %lld
    unsigned long long int z = 9293329040931231231U; // 8 bytes (-9quintillion to 9quintillion) %llu

    printf("%f\n", c);    // float
    printf("%0.5f\n", c); // float - format specifier
    printf("%lf\n", d);   // double
    printf("%d\n", e);    // bool
    printf("%d\n", f);    // char as numberic value
    printf("%c\n", f);    // char as character value
    printf("%c\n", g);    // unsigned char
    printf("%d\n", h);    // short int
    printf("%d\n", i);    // unsigned short int
    printf("%d\n", j);    // short int
    printf("%u\n", k);    // unsigned short int
    printf("%lld\n", l);  // long long int
    printf("%llu\n", z);  // unsigned long long int

    return 0;
}