#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int p,int r){
    int pivot=a[r];
    int i=(p-1);
    for(int j=0;j<r;j++){
        if(a[j]<=pivot){
            i=i+1;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[r]);
    return i+1;
}
void quickSort(int a[],int p,int r){
    if(p<r){
        int q=partition(a,p,r);
        quickSort(a,p,q-1);
        quickSort(a,q+1,r);
    }
}
int main(){
    int a[]={3,2,6,34,4,9,12};
    int n=sizeof(a)/sizeof(int);
    quickSort(a,0,n-1);
    // int val=partition(a,0,n-1);
    // printf("%d\n",val);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}