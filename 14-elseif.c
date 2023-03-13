/*
    90<= grade <= 100 : A
    80<= grade <= 90 : B
    70<= grade <= 80 : C
    0<= grade <= 70 : D

*/
#include <stdio.h>
int main()
{
    int grade;
    char letter;
    printf("Enter your grade:");
    scanf("%d", &grade);
    if (90 <= grade && grade <= 100)
        letter = 'A';
    else if (80 <= grade && grade <= 90)
        letter = 'B';
    else if (70 <= grade && grade <= 80)
        letter = 'C';
    else if (0 <= grade && grade <= 70)
        letter = 'D';
    else
    {
        letter = ' ';
        printf("Yanlış değer girdiniz!");
    }

    printf("letter %c\n", letter);
}