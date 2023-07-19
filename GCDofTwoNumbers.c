#include<stdio.h>
int gcd(int ,int);
void main(){
    int a,b,answer;
    scanf("%d",&a);
    scanf("%d",&b);
    answer=gcd(a,b);
    printf("%d",answer);
}
int gcd(int a,int b){
        int r1=a;
        int r2=b;
        int q;
        int r;
        while(r2>0){
            q=r1/r2;
            r=r1-q*r2;
            r1=r2;
            r2=r;
        }
        return r1;
}