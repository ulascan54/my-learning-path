// read two integers and print their sum

// CALL BY VALUE
// when we send addresses to the function: CALL BY REFERENCE

#include <stdio.h>

// void add( int, int, int );
// void add( int a, int b, int sum );

int add(int, int);
// int add( int a, int b );

/*
int main(){
    int x, y, result = 8;

    printf("Enter two integers: ");
    scanf( "%d %d", &x, &y );
    add( x, y, result );
    printf( "The sum of %d and %d is: %d\n", x, y, result );
}

void add( int a, int b, int sum ){
    sum = a + b;
    printf( "inside add - The sum of %d and %d is: %d\n", a, b, sum );
}
*/

int main()
{
    int x, y, result = 8;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    result = add(x, y);
    // result = 20;
    printf("The sum of %d and %d is: %d\n", x, y, result);
}

int add(int a, int b)
{
    return a + b;
    printf("inside add - The sum of %d and %d is:\n", a, b);
    // printf does not run... immediate exit with return
}
