#include <stdio.h>
int main()
{
    int grade, tens_in_grade;
    char letter;
    printf("Enter your grade:");
    scanf("%d", &grade);

    tens_in_grade = grade / 10;
    if (tens_in_grade == 9 || tens_in_grade == 10)
        letter = 'A';
    else if (tens_in_grade == 8)
        letter = 'B';
    else if (tens_in_grade == 7)
        letter = 'C';
    else
        letter = 'D';

    switch (tens_in_grade)
    {
    case 10:
    case 9:
        letter = 'A';
        break;
    case 8:
        letter = 'B';
        break;
    case 7:
        letter = 'C';
        break;
    default:
        letter = 'D';
        break;
    }
}