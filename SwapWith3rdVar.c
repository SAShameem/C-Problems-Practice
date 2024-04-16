// Swap 2 num with 3rd Variable:
#include<stdio.h>
int main(){
    int num1,num2,temp;
    printf("Enter 1st Num:");
    scanf("%d",&num1);
    printf("Enter 2nd Num:");
    scanf("%d",&num2);

    printf("Before Swap: %d and %d \ns",num1,num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("After Swap: %d and %d",num1,num2);
return 0;
}
