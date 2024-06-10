#include<stdio.h>
int main(){
    int num,i,count=0;

    printf("Enter a Positive Number:");
    scanf("%d",&num);
    if(num<=1)
        printf("It's not a Prime Number");
    else{
        for(i=2;i<num;i++){
            if(num%i==0){

                count++;
                break;
                }
        }
        if(count==0)
            printf("It's a Prime Number");
        else
            printf("It's not a Prime Number");
    }



return 0;
}
