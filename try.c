#include<stdio.h>
int main() {
    int x=589648;
    int sum=0;
   int placevalue=1;
   while(x>0){
    int digit=((x%10)+1)%10;
    sum=sum+digit*placevalue;
    placevalue=placevalue*10;
    x=x/10;
   }
   printf("The sum of the digits of the number is: %d\n",sum);

    return 0;   
}