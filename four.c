#include<stdio.h>
void main(){
    int n;
    printf("Enter Size of Arr: ");
    scanf("%d", &n);

    int arry[n];
    int *poi;
    poi =arry;
    printf("Enter arry element\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&*(poi+i));
    }

    printf("Arry Elemntes is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",*(poi+i));
    }
}