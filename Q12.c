#include<stdio.h>
#include<conio.h>

int main(){
    FILE *fp;
    char ch;
    int noofwords=0;
    fp=fopen("abc.txt","r");
    if (fp==NULL)
    {
      printf("Error while opening a file");
    }
    while((ch=fgetc(fp))!=EOF)
    {
        if((ch==' ')||(ch=='\n'))
        {
            noofwords++;
        }
    }
    fclose(fp);
    printf("Number of words in a file are %d",noofwords+1);
}