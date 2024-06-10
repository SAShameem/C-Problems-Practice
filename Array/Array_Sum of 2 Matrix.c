 #include<stdio.h>
#include<string.h>
int main(){
    int i,j,row,col;

    printf("Enter Number of Row:");
    scanf("%d",&row);
    printf("Enter Number of Column:");
    scanf("%d",&col);

    int arr[row][col];

    for(i=0;i<row;i++){

        arr[i]=rand()%100;

        for(j=0;j<col;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<n;i++){
        printf("arr[%d][%d]=%d %d \n",i,arr[i],arr[j]);

    }

return 0;
}
