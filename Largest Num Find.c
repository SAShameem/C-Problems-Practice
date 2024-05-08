// Finding Largest Number Among 3
#include<stdio.h>
int main(){
    int num1,num2,num3;

    printf("Enter 1st Num:");
    scanf("%d",&num1);
    printf("Enter 2nd Num:");
    scanf("%d",&num2);
    printf("Enter 3rd Num:");
    scanf("%d",&num3);

    if (num1>num2 && num1>num3)
        printf("%d is Largest",num1);
    else if(num2>num1 && num2>num3)
        printf("%d is Largest",num2);
    else if (num3>num1 && num3>num2)
        printf("%d is Largest",num3);
    else
        printf("The numbers are equal.");
return 0;
}
