#include<stdio.h>
int main(){
    int n,i,arr[100];

    printf("Enter A Num:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        arr[i]=rand()%100;
    }
    for(i=0;i<n;i++){
        printf("arr[%d]=%d \n",i,arr[i]);

    }
return 0;
}
