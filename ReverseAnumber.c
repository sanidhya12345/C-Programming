#include<stdio.h>
void main(){
    int number,reverse=0,remainder,dup;
    printf("Enter the number");
    scanf("%d",&number);
    dup=number;
    while(number!=0){
        remainder=number%10;
        reverse=reverse*10+remainder;
        number=number/10;
    }
    printf("The number before swapping is %d",dup);
    printf("The number after swapping is %d",reverse);
}