#include<stdio.h>
#include<stdlib.h> // Include stdlib.h for rand()

int main(){
    int row,col,i,j;

    printf("Enter Number of Row:");
    scanf("%d",&row);
    printf("Enter Number of Column:");
    scanf("%d",&col);

    int A[row][col],B[row][col],sum[row][col];

    printf("A[%d][%d]=\n",row,col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            A[i][j] = rand() % 100; // Initialize A with random values between 0 and 99
            printf("\t %d ", A[i][j]);
        }
        printf("\n");
    }

    printf("B[%d][%d]=\n",row,col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            B[i][j] = rand() % 100; // Initialize B with random values between 0 and 99
            printf("\t %d ", B[i][j]);
        }
        printf("\n");
    }

    printf("Sum[%d][%d]=\n",row,col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            sum[i][j]=A[i][j]+B[i][j];
            printf("\t %d ",sum[i][j]);
        }
         printf("\n");
    }

    return 0;
}
