// Multiplication Table:
#include<stdio.h>
int main(){
    int i,n;
    printf("Multiplication Table of n.\n");

    printf("Enter The Value of n:");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("%d*%d=%d \n",n,i,n*i);
    }

return 0;
}
