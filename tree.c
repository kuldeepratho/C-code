#include <stdio.h>
#include <stdlib.h>
 
void main()
{
    int num1, num2, i, j;
 
    printf("Enter the value of num1: ");
    scanf("%d", &num1);
    printf("Enter the value of num2: ");
    scanf("%d", &num2);
	
	for(i=num1;i<=num2;i++){
		
		for(j=2;j<=i;j++){
			if(i%j == 0)
			break;
	}
		if(i==j)
		printf("%d ",j);

	}

     
}
 