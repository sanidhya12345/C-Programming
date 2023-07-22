#include<stdio.h>
int armstrongCheck(int number){
    int check=number,remainder,calculate=0;
    while(number!=0){
        remainder=number%10;
        calculate=calculate+(remainder*remainder*remainder);
        number/=10;
    }
    return calculate==check?1:0;
}
void main(){
    int number;
    printf("Enter any number:- ");
    scanf("%d",&number);
    armstrongCheck(number)?printf("Armstrong Number"):printf("Not an Armstrong Number");
}