// Summation,Substraction,Multiplication,Division,Average,Remainder of 2 number
#include<stdio.h>
int main(){
    int num1,num2,sum,sub,mul,rem;
    float avg,div;

    printf("Enter 1st Num: ");
    scanf("%d",&num1);
    printf("Enter 2nd Num: ");
    scanf("%d",&num2);

    sum=num1+num2;
    printf("Sum=%d \n",sum);

    avg=(float)sum/2;
    printf("Avg=%.2f \n",avg);

    sub=num1-num2;
    printf("Sub=%d \n",sub);

    mul=num1*num2;
    printf("Mul=%d \n",mul);

    div=(float)num1/num2;
    printf("Div=%.2f \n",div);

    rem=num1%num2;
    printf("Remainder=%d \n",rem);

return 0;
}
