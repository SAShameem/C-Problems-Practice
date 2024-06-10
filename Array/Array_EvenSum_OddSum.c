//  Sum using array:
#include<stdio.h>
int main(){

    int i, num[5],evensum=0,oddsum=0;

//Getting User Input
    printf("Enter 5 int num:");

    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }

    for(i=0;i<5;i++){
        if(num[i]%2==0)
            evensum=evensum+num[i];
        else
            oddsum=oddsum+num[i];
    }
    printf("Sum of Even: %d\n",evensum);
    printf("Sum of Odd: %d\n",oddsum);
return 0;
}
