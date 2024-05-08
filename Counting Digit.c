// Counting digit of a given number:
#include<stdio.h>
int main(){
    int num,count=0;

    printf("Enter an integer number:");
    scanf("%d",&num);

    while(num!=0)
    {
        num=num/10;
        ++count;
    }
    printf("Total Digits of the number: %d\n",count);
return 0;
}
