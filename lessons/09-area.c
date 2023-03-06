#include <stdio.h>
// write a program which finds the area and the vşoe of a cylinder

#include <math.h> //for pi value: M_PI
double circle_area(double r)
{
    return M_PI * r * r;
}
double circle_circum(double r)
{
    return 2 * M_PI * r;
}
double rectangle_area(double w, double h)
{
    return w * h;
}
double cylinder_area(double r, double h)
{
    return 2 * circle_area(r) + rectangle(circle_circum(r), h);
}
double cylinder_volume(double r, double h)
{
    return h * circle_area(r);
}

int main()
{
    double r, h, area, volume;
    printf("Enter r and h for your clinder:");
    scanf("%lf %lf", &r, &h);
    area = cylinder_area(r, h);
    volume = cylinder_volume(r, h);
    printf("areA: %f volume:%f \n", area, volume);

    // r=5.0,h=1.0;
    // area = cylinder_area(r, h);
    // volume = cylinder_volume(r, h);
    // printf("new cyl area: %f volume:%f \n", area, volume);
}