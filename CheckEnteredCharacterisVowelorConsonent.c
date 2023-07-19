#include<stdio.h>
void main(){
    char c;
    printf("Enter the character");
    scanf("%c",&c);
    int val;
    val=(c=='a')?printf("Vowel"):(c=='e')?printf("Vowel"):(c=='i')?printf("Vowel"):(c=='o')?printf("Vowel"):(c=='u')?printf("Vowel"):printf("Consonent");
}