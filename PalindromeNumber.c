#include<stdio.h>
void main(){
    int number,dup,reverse=0,remainder;
    printf("Enter the number:- ");
    scanf("%d",&number);
    dup=number;
    while(number!=0){
        remainder=number%10;
        reverse=reverse*10+remainder;
        number=number/10;
    }
    reverse==dup?printf("Palindrome Number"):printf("Not a Palindrome Number");
}