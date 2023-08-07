#include <stdio.h>
void merge(int a[],int b[],int c[],int m,int n){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<m){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }
}
void mergeArray(int A[],int l,int m,int r){
    int l1=m-l+1;
    int l2=r-m;
    int left[l1];
    int right[l2];
    for(int i=0;i<l1;i++){
        left[i]=A[l+i];
    }
    for(int j=0;j<l2;j++){
        right[j]=A[m+1+j];
    }
    merge(left,right,A,l1,l2);
}
int main() {
    int a[]={1,3,5,7,2,4,6,8};
    mergeArray(a,0,3,7);
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
