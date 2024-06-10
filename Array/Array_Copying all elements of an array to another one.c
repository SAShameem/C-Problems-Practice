#include<stdio.h>
int main(){
    int arr1[3]={1,2,3},arr2[3],i;

    printf("Array 1: ");

    for(i=0;i<3;i++){
        printf("%d ",arr1[i]);
    }
// copy:
    for(i=0;i<3;i++){
        arr2[i]=arr1[i];
    }

    printf("\nArray 2: ");
    for(i=0;i<3;i++){
        printf("%d ",arr2[i]);
    }


return 0;
}
