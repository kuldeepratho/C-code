#include<stdio.h>
#include<string.h>

void main(){

char str[100],rev[100];
int i,j,l;
printf("enter your string: ");
scanf("%s",&str);

l=strlen(str); j=0;
for (i=l-1; i>=0; i--){

    rev[j++]=str[i];}

    rev[j]=' ';
    printf("reverse string is %s",rev);

    puts(rev);


}