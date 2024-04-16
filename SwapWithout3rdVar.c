// Swap 2 num without 3rd Variable:
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter 1st Num:");
    scanf("%d",&num1);
    printf("Enter 2nd Num:");
    scanf("%d",&num2);

    printf("Before Swap: %d and %d \n",num1,num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("After Swap: %d and %d",num1,num2);
return 0;
}

