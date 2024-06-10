#include<stdio.h>
int main(){
    int n,i,j,temp,arr[100];

    printf("Enter A Num:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        arr[i]=rand()%100;
    }
    printf("Elements: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // sorting (Ascending:) :
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                //swaping:
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nAscending Order: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // sorting (Descending:) :
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                //swaping:
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nDescending Order: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

return 0;
}
