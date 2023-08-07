#include <stdio.h>
struct maxmin{
    int max;
    int min;
};
struct maxmin ans;
struct maxmin left;
struct maxmin right;
struct maxmin findmaxmin(int a[],int i,int j){
    if(i==j){
        ans.max=ans.min=a[i];
        return ans;
    }
    if(i==j-1){
        if(a[i]<a[j]){
            ans.max=a[j];
            ans.min=a[i];
        }
        else{
            ans.max=a[i];
            ans.min=a[j];
        }
        return ans;
    }
    int mid=(i+j)/2;
    left=findmaxmin(a,i,mid);
    right=findmaxmin(a,mid+1,j);
    if(left.max>right.max){
        ans.max=left.max;
    }
    else{
        ans.max=right.max;
    }
    if(left.min<right.min){
        ans.min=left.min;
    }
    else{
        ans.min=right.min;
    }
    return ans;
}
int main() {
    int a[]={1,3,5,7};
    int b[]={2,4,6,8};
    int c[8];
    int i=0,j=0,k=0;
    int m=4;
    int n=4;
    while(i<m && j<n){
        int min1=findmaxmin(a,i,m-1).min;
        int min2=findmaxmin(b,j,n-1).min;
        if(min1<min2){
            c[k]=min1;
            i++;
            k++;
        }
        else{
            c[k]=min2;
            j++;
            k++;
        }
    }
    while(i<m){
        c[k++]=findmaxmin(a,i++,m-1).min;
    }
    while(j<n){
        c[k++]=findmaxmin(b,j++,n-1).min;
    }
    for(int l=0;l<8;l++){
        printf("%d",c[l]);
    }
    return 0;
}