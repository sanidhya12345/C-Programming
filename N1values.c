#include <stdio.h>
int main(void) {
    int test;
    scanf("%d\n",&test);
    while(test--!=0){
        int n;
        scanf("%d",&n);
        long arr[n+1];
        int val=n-2;
        for(int i=0;i<n-2;i++){
            arr[i]=i+1;
        }
        arr[val]=n-1;
        arr[val+1]=n-1;
        long sum=0;
        for(int i=0;i<=n-1;i++){
            sum+=arr[i];
        }
        long power=1;
        for(int i=0;i<n;i++){
            power*=2;
        }
        arr[n]=power-sum;
        for(int i=0;i<=n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
	return 0;
}

