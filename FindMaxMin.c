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
   
    int a[]={112,3,-2,89};
    findmaxmin(a,0,3);
    printf("%d\n",ans.max);
    printf("%d\n",ans.min);

    return 0;
}
