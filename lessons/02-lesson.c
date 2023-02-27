/*
    This progam reads a distance from the user in miles
    and converts it to kilometers and presents it to the user
*/

#include <stdio.h> // printf and scanf function definitions
#define REEL_SAYI double
#define yazdir printf
#define oku scanf

int main(void)
{
    const double conv_const = 1.609;
    REEL_SAYI miles = 0, kms; // distance in miles, eqv distance in kilometers
    // read the distance from the user:
    yazdir("Enter the distance in miles:");
    oku("%lf", &miles); // &:address of

    // convert the distance to kilometers:
    kms = miles * conv_const;

    // print the result to the user:
    yazdir("Equivalent distance is kms is:\n %f kms (%f miles)", kms, miles);

    // Data Types:
}