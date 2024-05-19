/*
(3)
*****
****
***
**
*

*/
#include<stdio.h>
int main(){
    int n,row,col;
    printf("Enter Line:");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=n;col>=row;col--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// odd sum, even sum r star er 4 t mot 5 ta lab

