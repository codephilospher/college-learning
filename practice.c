#include<stdio.h>
int main() {
    // printf("Hello, World!\n");
    //   printf("admission no\n");
    //     printf("shiv\n");
    // int a,b;
    // printf("Enter two numbers: ");
    // scanf("%d %d",&a,&b);
    // printf("Sum of %d and %d is %d\n",a,b,a+b);
    printf("swaping two numbers\n");
    int x,y,z;
    
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    z=x;
    x=y;
    y=z;

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}