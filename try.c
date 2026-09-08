#include<stdio.h>
int main() {
   float real, real2;
   float imag, imag2;
   int x ; // 
   // replace with actual input
   printf("Enter the number of complex numbers: ");
   scanf("%d", &x);
   while(x>0) {   
    printf("Enter the real part: ");
    scanf("%f", &real);
    scanf("%f", &real2);
    printf("Enter the imaginary part: ");
    scanf("%f", &imag);
    scanf("%f", &imag2);
    printf("Complex number: %.2f + %.2fi\n", real, imag);
    printf("Complex number: %.2f + %.2fi\n", real2, imag2);
    printf("Sum of complex numbers: %.2f + %.2fi\n", real + real2, imag + imag2);
    x--;
   }
   return 0;   
}