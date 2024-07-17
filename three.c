#include<stdio.h>
void revstr(char str[],int lenght){
    char rev[200];
    for (int i = 0; i < lenght; i++)
    {
        rev[i]=str[lenght-1-i];
    }
    rev[lenght]='\0';
    printf("reverse Str is %s",rev);
    
}
void main(){
    char str[200];
    printf("Enter a string :");
    scanf("%s", &str);
    
    int lenght =0;
    while (str[lenght]!=0)
    {
        lenght++;
    }
    revstr(str,lenght);
    
}