#include<stdio.h>
void main(){
    int n;
    printf("Enter Size of Array :");
    scanf("%d", &n);

    int arry[n];
    printf("Enter Array Elements\n");
    for(int i=0; i<n;i++){
    scanf("%d", &arry[i]);
    }
    int max= arry[0];
    for(int i=0; i<n; i++){
        if (arry[i]>max)
        {
            max= arry[i];
        }
        
    }
    printf("Maxi value is :%d",max);
}