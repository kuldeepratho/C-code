#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int number;
    int lower = 0, upper = 10;

    srand(time(NULL));

    number = (rand() % (upper-lower+1)) + lower ;

    printf("%dn",number);
}