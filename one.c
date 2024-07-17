#include<stdio.h>
void main(){
    char str;
    printf("Enter any Character :");
    scanf("%c" , &str);
    switch (str)
    {
    case 'A':
    printf("Its a Vowel");
        break;
    case 'a':
    printf("Its a Vowel");
    break;
    case 'E':
    printf("Its a Vowel");
    break;
    case 'e':
    printf("Its a Vowel");
    break;
    case 'I':
    printf("Its a Vowel");
    break;
    case 'i':
    printf("Its a Vowel");
    break;
    case 'O':
    printf("Its a Vowel");
    break;
    case 'o':
    printf("Its a Vowel");
    break;
    case 'U':
    printf("Its a Vowel");
    break;
    case 'u':
    printf("Its a Vowel");
    break;
    default:
    printf("Its a consonant");
        break;
    }
}