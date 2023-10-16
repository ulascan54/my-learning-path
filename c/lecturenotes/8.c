// write functions to find the area and volume of a cylinder

#include <stdio.h>
#include <math.h> // for PI value - M_PI

double area_of_circle(double r);
double area_of_rectangle(double w, double h);
double area_of_cylinder(double r, double h);
double volume_of_cylinder(double r, double h);

int main()
{
    double r, h, area, volume;
    printf("Enter radius and height: ");
    scanf("%lf %lf", &r, &h);
    printf("Main calls area_of_cylinder...\n");
    area = area_of_cylinder(r, h);
    printf("Main calls volume_of_cylinder...\n");
    volume = volume_of_cylinder(r, h);
    printf("Area: %f Volume: %f\n", area, volume);
}

double area_of_circle(double r)
{
    return M_PI * r * r;
}

double area_of_rectangle(double w, double h)
{
    return w * h;
}

double area_of_cylinder(double r, double h)
{
    printf("area_of_cylinder calls area_of_circle and area_of_rectangle...\n");
    return 2 * area_of_circle(r) + area_of_rectangle(2 * M_PI * r, h);
}

// fun1( x, fun2( func3( 3, 4 ) ) ); is allowed

double volume_of_cylinder(double r, double h)
{
    printf("volume_of_cylinder calls area_of_circle...\n");
    return area_of_circle(r) * h;
}
