#include<stdio.h>
void main(){
    FILE *p;
    char str[100];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Your name :");
        scanf("%s",&str);
        p=fopen("names.txtn", "a");

        fprintf(p,"%s\n",str);
        fclose(p);
        
    }

    
}