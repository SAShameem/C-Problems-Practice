// Fibonacci series with array:

#include<stdio.h>
int main(){
    int i,n,a[30];

    printf("How many fibonucci Num? :");
    scanf("%d",&n);

    a[0]=0;
    a[1]=1;

    for(i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    printf("\n");
    printf("Fibonacci Series: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    printf("\n");

return 0;
}
