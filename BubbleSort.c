#include<stdio.h>
void bubbleSort(int a[],int n){
    int flag;
    for(int pass=1;pass<=n-1;pass++){
        flag=1;
        for(int i=0;i<=n-1-pass;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                flag=0;
            }
        }
        if(flag==1){
            break;
        }
    }
}
void main(){
    int a[]={2,3,4,5,1};
    int n=sizeof(a)/sizeof(int);
    bubbleSort(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}