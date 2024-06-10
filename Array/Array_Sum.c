//  Sum using array:
#include<stdio.h>
int main(){

    int i, num[5],sum=0;

//Getting User Input
    printf("Enter 5 int num:");

    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }

    for(i=0;i<5;i++){
        sum=sum+num[i];
    }
    printf("Sum=%d \n",sum);

return 0;
}
