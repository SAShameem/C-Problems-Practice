// Have some error: (Didn't Initialized A & B. Ceck >>> matrix_gpt.c <<< file
#include<stdio.h>
#include<stdlib.h>
int main(){
    int row,col,i,j,k;

    printf("Enter Number of Row:");
    scanf("%d",&row);
    printf("Enter Number of Column:");
    scanf("%d",&col);

    int A[row][col],B[row][col],sum[row][col];

    printf("A[%d][%d]=\n",row,col);
    for(i=0;i<row;i++){

        for(j=0;j<col;j++){
            printf("\t %d ",rand()%100);
        }
        printf("\n");
    }

    printf("B[%d][%d]=\n",row,col);
    for(i=0;i<row;i++){

        for(j=0;j<col;j++){
            printf("\t %d ",rand()%100);
        }
        printf("\n");
    }

    printf("Sum= \n");
    for(i=0;i<row;i++){

        for(j=0;j<col;j++){
          sum[i][j]=A[i][j]+B[i][j];
            //printf("%d ",A[i][j]+B[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++){

        for(j=0;j<col;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
return 0;
}
