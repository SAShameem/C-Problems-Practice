#include<stdio.h>

int main(){
    int num[7]={12,1,2,4,53,7,23};
    int value,pos=-1,i;

    printf("Elements of Array:12,1,2,4,53,7,23 \n");
    printf("Enter the value you want to search:");
    scanf("%d",&value);

    for(i=0;i<7;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("The value is not found");
    }
    else{
        printf("The value is found at %d position", pos);
    }
return 0;
}
