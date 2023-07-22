#include<stdio.h>
void main(){
    int i,number;
    printf("Enter the number of which you want table:- ");
    scanf("%d",&number);
    for(i=1;i<=10;i++){
        printf("%d x %d is = %d\n",number,i,number*i);
    }
}