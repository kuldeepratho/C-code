#include<stdio.h>
#include<conio.h>
void main(){

unsigned long long int i=1;
unsigned long long int number;
unsigned long long int fact=1;

printf("enter the number :");
scanf("%llu",&number);

while(i<=number){

fact=fact*i;
i++;
}

printf("The factorial of %llu is %llu",number,fact);




}