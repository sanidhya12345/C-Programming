#include<stdio.h>
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value after swapping of a and b is %d and %d",a,b);
}
void main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The value before swapping of a and b is %d and %d \n",a,b);
    swap(a,b);
}