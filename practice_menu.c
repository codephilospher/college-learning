/*
 * Practice Concepts Menu
 * ----------------------
 * A presentation-ready collection of the beginner C concepts developed
 * in the original practice program.
 *
 * Concepts covered:
 * 1. Addition of two integers
 * 2. Swapping two integers using a temporary variable
 * 3. Even / odd check
 * 4. Greater of two numbers
 * 5. Greatest of three numbers
 * 6. Basic student information (age, marks, grade)
 * 7. Circle area and circumference
 * 8. Average and grade of five subjects
 * 9. Divisibility by 5 and 11
 * 10. Character classification
 *
 * The program uses only the standard C input/output library.
 */

#include <stdio.h>

#define PI 3.14159
#define MIN_MENU_OPTION 1
#define MAX_MENU_OPTION 11

/* ---------- Function Prototypes ---------- */

void display_menu(void);
void pause_program(void);

int read_int(const char *prompt);
float read_float(const char *prompt);
char read_char(const char *prompt);

void addition(void);
void swap_numbers(void);
void check_even_odd(void);
void compare_two_numbers(void);
void compare_three_numbers(void);
void student_information(void);
void circle_calculations(void);
void marks_and_grade(void);
void divisibility_check(void);
void character_classification(void);

/* ---------- Main Program ---------- */

int main(void)
{
    int choice;

    printf("\n");
    printf("============================================================\n");
    printf("              C PROGRAMMING PRACTICE SUITE\n");
    printf("============================================================\n");
   

    do
    {
        display_menu();
        choice = read_int("Enter your choice: ");

        switch (choice)
        {
            case 1:
                addition();
                break;

            case 2:
                swap_numbers();
                break;

            case 3:
                check_even_odd();
                break;

            case 4:
                compare_two_numbers();
                break;

            case 5:
                compare_three_numbers();
                break;

            case 6:
                student_information();
                break;

            case 7:
                circle_calculations();
                break;

            case 8:
                marks_and_grade();
                break;

            case 9:
                divisibility_check();
                break;

            case 10:
                character_classification();
                break;

            case 11:
                printf("\nThank you for using the C Programming Practice Suite.\n");
                break;

            default:
                printf("\nInvalid menu choice. Please select 1 to 11.\n");
        }

        if (choice != 11)
        {
            pause_program();
        }

    } while (choice != 11);

    return 0;
}

/* ---------- Menu and Input Helpers ---------- */

void display_menu(void)
{
    printf("\n");
    printf("------------------------ MAIN MENU -------------------------\n");
    printf("  1. Add Two Numbers\n");
    printf("  2. Swap Two Numbers\n");
    printf("  3. Check Even or Odd\n");
    printf("  4. Find Greater of Two Numbers\n");
    printf("  5. Find Greatest of Three Numbers\n");
    printf("  6. Enter and Display Student Information\n");
    printf("  7. Calculate Circle Area and Circumference\n");
    printf("  8. Calculate Average and Grade of Five Subjects\n");
    printf("  9. Check Divisibility by 5 and 11\n");
    printf(" 10. Classify a Character\n");
    printf(" 11. Exit\n");
    printf("------------------------------------------------------------\n");
}

void pause_program(void)
{
    char buffer[4];

    printf("\nPress Enter to return to the main menu...");
    fgets(buffer, sizeof(buffer), stdin);

    /* If the line was longer than the buffer, discard the remainder. */
    if (buffer[0] != '\n')
    {
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
        {
            /* Discard remaining input. */
        }
    }
}

int read_int(const char *prompt)
{
    int value;
    int result;

    while (1)
    {
        printf("%s", prompt);
        result = scanf("%d", &value);

        if (result == 1)
        {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
                /* Discard remaining characters on the line. */
            }
            return value;
        }

        printf("Invalid input. Please enter a whole number.\n");

        while (getchar() != '\n')
        {
            /* Clear invalid input. */
        }
    }
}

float read_float(const char *prompt)
{
    float value;
    int result;

    while (1)
    {
        printf("%s", prompt);
        result = scanf("%f", &value);

        if (result == 1)
        {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
                /* Discard remaining characters on the line. */
            }
            return value;
        }

        printf("Invalid input. Please enter a numeric value.\n");

        while (getchar() != '\n')
        {
            /* Clear invalid input. */
        }
    }
}

char read_char(const char *prompt)
{
    char value;
    int result;

    while (1)
    {
        printf("%s", prompt);
        result = scanf(" %c", &value);

        if (result == 1)
        {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
                /* Discard remaining characters on the line. */
            }
            return value;
        }

        printf("Invalid input. Please enter a character.\n");

        while (getchar() != '\n')
        {
            /* Clear invalid input. */
        }
    }
}

/* ---------- Practice Features ---------- */

void addition(void)
{
    int first;
    int second;

    printf("\n[1] ADD TWO NUMBERS\n");
    first = read_int("Enter first number: ");
    second = read_int("Enter second number: ");

    printf("Result: %d + %d = %d\n", first, second, first + second);
}

void swap_numbers(void)
{
    int first;
    int second;
    int temporary;

    printf("\n[2] SWAP TWO NUMBERS\n");
    first = read_int("Enter first number: ");
    second = read_int("Enter second number: ");

    printf("Before swapping: first = %d, second = %d\n", first, second);

    temporary = first;
    first = second;
    second = temporary;

    printf("After swapping:  first = %d, second = %d\n", first, second);
}

void check_even_odd(void)
{
    int number;

    printf("\n[3] EVEN OR ODD\n");
    number = read_int("Enter a number: ");

    if (number % 2 == 0)
    {
        printf("%d is even.\n", number);
    }
    else
    {
        printf("%d is odd.\n", number);
    }
}

void compare_two_numbers(void)
{
    int first;
    int second;

    printf("\n[4] GREATER OF TWO NUMBERS\n");
    first = read_int("Enter first number: ");
    second = read_int("Enter second number: ");

    if (first > second)
    {
        printf("%d is greater than %d.\n", first, second);
    }
    else if (second > first)
    {
        printf("%d is greater than %d.\n", second, first);
    }
    else
    {
        printf("Both numbers are equal.\n");
    }
}

void compare_three_numbers(void)
{
    int first;
    int second;
    int third;
    int greatest;

    printf("\n[5] GREATEST OF THREE NUMBERS\n");
    first = read_int("Enter first number: ");
    second = read_int("Enter second number: ");
    third = read_int("Enter third number: ");

    greatest = first;

    if (second > greatest)
    {
        greatest = second;
    }

    if (third > greatest)
    {
        greatest = third;
    }

    printf("The greatest number is %d.\n", greatest);
}

void student_information(void)
{
    int age;
    float marks;
    char grade;

    printf("\n[6] STUDENT INFORMATION\n");
    age = read_int("Enter age: ");
    marks = read_float("Enter marks: ");
    grade = read_char("Enter grade: ");

    printf("\nStudent Information\n");
    printf("Age   : %d\n", age);
    printf("Marks : %.2f\n", marks);
    printf("Grade : %c\n", grade);
}

void circle_calculations(void)
{
    float radius;
    float area;
    float circumference;

    printf("\n[7] CIRCLE CALCULATIONS\n");
    radius = read_float("Enter radius: ");

    if (radius < 0)
    {
        printf("Radius cannot be negative.\n");
        return;
    }

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area          : %.2f\n", area);
    printf("Circumference : %.2f\n", circumference);
}

void marks_and_grade(void)
{
    int marks[5];
    int i;
    float average;
    char grade;

    printf("\n[8] AVERAGE AND GRADE\n");

    for (i = 0; i < 5; i++)
    {
        marks[i] = read_int("Enter marks: ");
    }

    average = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5.0f;

    if (average >= 90)
    {
        grade = 'A';
    }
    else if (average >= 80)
    {
        grade = 'B';
    }
    else if (average >= 70)
    {
        grade = 'C';
    }
    else if (average >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    printf("Average marks : %.2f\n", average);
    printf("Grade         : %c\n", grade);
}

void divisibility_check(void)
{
    int number;

    printf("\n[9] DIVISIBILITY BY 5 AND 11\n");
    number = read_int("Enter a number: ");

    if (number % 5 == 0 && number % 11 == 0)
    {
        printf("%d is divisible by both 5 and 11.\n", number);
    }
    else
    {
        printf("%d is not divisible by both 5 and 11.\n", number);
    }
}

void character_classification(void)
{
    char character;

    printf("\n[10] CHARACTER CLASSIFICATION\n");
    character = read_char("Enter a character: ");

    if ((character >= 'a' && character <= 'z') ||
        (character >= 'A' && character <= 'Z'))
    {
        printf("%c is an alphabet.\n", character);
    }
    else if (character >= '0' && character <= '9')
    {
        printf("%c is a digit.\n", character);
    }
    else
    {
        printf("%c is a special character.\n", character);
    }
}
