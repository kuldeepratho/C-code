#include<stdio.h>
#include<conio.h>
#include<time.h>

int main(){
    int h=0, m=0, s=0,i;

    printf("Please enter a time formate in HH:MM:SS \n");
    scanf("%d%d%d",&h,&m,&s);
    start:
    for(h; h<24; h++)
    {
        for(m; m<60; m++)
        {
            for(s; s<60; s++)
            {
                printf("\n\n\n\t\t\t%d:%d:%d",h,m,s);
                if (h<12)
                printf("AM");
                else
                printf("PM"); 
                for(double i=0; i<3619999; i++)
                i++;
                i--;
            }
            s=0;
        }
        m=0;
    }
    h=0;
    goto start;
    sleep(1);
}