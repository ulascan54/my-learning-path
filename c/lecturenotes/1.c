/* this program reads a distance from the user in miles
   and converts it to kilometers and presents it to the user */

#include <stdio.h>         // printf and scanf function definitions
#define KMS_PER_MILE 1.609 // conversion constant
#define REEL_SAYI double
#define yazdir printf
#define oku scanf

int main()
{
    /*
    double miles;
    double kms;
    */

    // const double conv_const = 1.609;

    double miles = 0, // distance in miles
        kms;          // eqv distance in kilometers

    // Read the distance from the user
    yazdir("Enter the distance in miles: ");
    oku("%lf", &miles); // &: address of

    // convert the distance to kilometers
    kms = miles * KMS_PER_MILE;

    // print the result to the user
    yazdir("Equivalent distance is kms is: %.3lf kms (%.3lf miles)\n", kms, miles);

    /* common place holders
              printf     scanf
    int         %d        %d
    float       %f        %f
    double      %f       %lf
    char        %c       %c     */

    // x = a + b * KMS_PER_MILE;

    /*
    multiply3( a, b, c );
    multiply3( 5, 10, 20 );
    */
}
