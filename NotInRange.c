#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

long long NotinRange (int* R, int* L, int n ) {
   
}

int main() {
    int n;
    scanf("%d", &n);
    int L[n],R[n];
    for(int i=0; i<n; i++)
    	scanf("%d %d", &L[i],&R[i]);
    long long out_ = NotinRange(R, L, n);
    long long sum=0;
    for(int i=1;i<=1000000;i++){
        sum+=i;
    }
    printf("%lld", sum);
}