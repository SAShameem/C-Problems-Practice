// Array:

#include<stdio.h>
int main(){

    int num[4], id[5]={7,8,9,6,5};

    // To print:

    printf("%d \n",id[0]);

    printf("--------------------\n");

    // To get user input:

    scanf("%d",&num[0]);
    printf("%d\n",num[0]);

    printf("---------- Give 5 Input----------\n");

    // Input & Output Using Loop:

    int i, roll[5];

    for(i=0;i<=4;i++){

        scanf("%d",&roll[i]);
    }
    printf("---------- Showing Output----------\n");
    for(i=0;i<=4;i++){

        printf("%d \n",roll[i]);
    }



return 0;
}
