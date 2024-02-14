#include<stdio.h>
#include<math.h>

int main(){

float f,c,fc,cf;

printf("temperature in Fahrenheit: ");
scanf("%f",&f);

printf("\ntemperature in Celsius: ");
scanf("%f",&c);

fc=(f-32)*5/9;
cf=(c*9/5)+32;

printf("temperature in celsius: %f\n",fc);
printf("temperature in Fahrenheit: %f\n",cf);


}