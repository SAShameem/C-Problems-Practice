//  Sum and Avg using array:

// ----- Have some ERRRORRRRR [Solved] -----

#include<stdio.h>
int main(){

    int i, num[5],sum=0;

 /* num[0]=1;
    num[1]=2;
    num[2]=3;
    num[3]=4;
    num[4]=5;
*/
//Getting User Input
 printf("Enter 5 int num:");

    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
    }

    for(i=0;i<5;i++){
        sum=sum+num[i];
    }
    printf("Sum=%d \n",sum);

    int avg= (float)sum/5;

    printf("Avg=%d \n",avg);

// printf("Sum=%d \n",sum);  printf("Avg=%d \n",(float)sum/5;


return 0;
}
