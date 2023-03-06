// given two sides and angle in between, finde third side of a triangle
// a ^2 =b^2 + c ^2 - 2bc
#include <stdio.h>
#include <ctype.h>
// find the uppercase of a lowercase char entered by the user with a function

// this function assumes that ch is a lowercase char, return uppercase version
char to_upper(char ch)
{
    return 'A' + (ch - 'a')
}
int main()
{
    char ch_lower, ch_upper;
    printf("Enter a lowercase char:");
    scanf("%c", &ch_lower);
    ch_upper = to_upper(ch_lower);
    printf("Uppercase of your char is: %c\n", ch_upper);

    char ch_lower, ch_upper;
    printf("Enter a lowercase char:");
    scanf(" %c", &ch_lower); // we should put a space for the enter
    ch_upper = to_upper(ch_lower);
    printf("Uppercase of your char is: %c\n", ch_upper);

    return 0;
}