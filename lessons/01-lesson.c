/*
    This progam reads a distance from the user in miles
    and converts it to kilometers and presents it to the user
*/

#include <stdio.h>         // printf and scanf function definitions
#define KMS_PER_MILE 1.609 // conversion constant

int main(void)
{
    double miles = 0, kms; // distance in miles, eqv distance in kilometers
    // read the distance from the user:
    printf("Enter the distance in miles:");
    scanf("%lf", &miles); // &:address of

    // convert the distance to kilometers:
    kms = miles * KMS_PER_MILE;

    // print the result to the user:
    printf("Equivalent distance is kms is:\n %f kms (%f miles)", kms, miles);

    /*common place holders
            printf  scanf
    int     %d      %d
    float   %f      %f
    double  %f      %lf
    char    %c      %c
    */

    // x = a + b * KMS_PER_MILE
    /*
        multiply3( a, b, c  );
        multiply3( 5, 10, 20 );
    */
}