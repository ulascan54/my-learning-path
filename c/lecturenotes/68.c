

#include <stdio.h>

// assume n >= 0
void print_digits_rev(int n)
{
    // 4567:   print 7   then print 456 in reverse order
    printf("%d ", n % 10);

    if (n > 9)
    {
        print_digits_rev(n / 10);
    }
    else
        printf("\n");
}

// assume n >= 0
void print_digits_fwd(int n)
{
    // 4567: print 4   then print 567 in normal order
    // 4567: 456 can be easily obtained - 7 also
    // 4567: print 456 in normal order, then print 7
    if (n > 9)
        print_digits_fwd(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int n = 4567;
    print_digits_rev(n);
    print_digits_fwd(n);
    printf("\n");
    print_digits_fwd(n);
    printf("\n");
    print_digits_rev(n);
}
