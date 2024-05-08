// Find power:
// Find Absolute value:
#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    double result;

    printf("Enter Base:");
    scanf("%d",&x);
    printf("Enter Power:");
    scanf("%d",&y);

    result=pow(x,y);

    printf("The Result of %d to the power %d is: %.2lf \n",x,y,result);
    return 0;
}

