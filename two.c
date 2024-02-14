#include<stdio.h> 

int main(){  

int number,result,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&number);    
temp=number;    
while(number>0)    
{    
result=number%10;    
sum=(sum*10)+result;    
number=number/10;    
}    
if(temp==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   