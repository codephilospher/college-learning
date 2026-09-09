#include<stdio.h>
int main() {
    
    printf("Hello, World!\n");
      printf("admission no\n");
        printf("shiv\n");
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum of %d and %d is %d\n",a,b,a+b);
    printf("swaping two numbers\n");
    int x,y,z;
    
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    z=x;
    x=y;
    y=z;

    printf("After swapping: x = %d, y = %d\n", x, y);
    printf("check no is even or odd\n ");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
    printf("check which number is greater\n");
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("%d is greater than %d\n",a,b);
    else
        printf("%d is greater than %d\n",b,a);  
    printf("check which number is greater in 3 no.\n");
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b && a>c)
        printf("%d is the greatest number.\n", a);
    else if(b>a && b>c)
        printf("%d is the greatest number.\n", b);
    else
        printf("%d is the greatest number.\n", c); 
    int a;
    float b;
    char c;
    printf("Enter an age: ");
    scanf("%d", &a);
    printf("Enter your marks: ");
    scanf("%f", &b);
    printf("Enter your grade: ");
    scanf(" %c", &c);
    printf("Age: %d\n", a);
    printf("Marks: %.2f\n", b);
    printf("Grade: %c\n", c);   
    printf("Area of circle and circumference of circle\n");
    int radius;
    float area, circumference;
    float pi = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);       
    int a,b,c,d,e;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    float average = (a + b + c + d + e) / 5.0;
    printf("Average marks: %.2f\n", average);
    if(average >= 90)
        printf("Grade: A\n");
    else if (average >= 80)
        printf("Grade: B\n");
    else if (average >= 70)
        printf("Grade: C\n");
    else if (average >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
    
     printf("TO check the number is divisible by 5 and 11\n");
     int num;
     printf("Enter a number: ");
     scanf("%d", &num);

     if (num % 5 == 0 && num % 11 == 0)
         printf("%d is divisible by both 5 and 11.\n", num);
     else
         printf("%d is not divisible by both 5 and 11.\n", num);
    printf("check given character is alphabet  digit or special character\n");
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("%c is an alphabet.\n", ch);
    else if (ch >= '0' && ch <= '9')
        printf("%c is a digit.\n", ch);
    else
        printf("%c is a special character.\n", ch); 
        

    return 0;
}