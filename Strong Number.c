// Counting digit of a given number:
#include<stdio.h>
int main(){
    int num,sum=0,rem,temp,fact,i;

    printf("Enter an integer number:");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;

        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        temp=temp/10;
    }
    if(sum=num)
        printf("%d is a Strong Number\n",num);
    else
        printf("%d is not a Strong Number\n",num);
return 0;
}
