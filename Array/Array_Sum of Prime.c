// may be have some bug; enter 3  num: 23. 24, 2 out put is wrong
#include <stdio.h>

int main() {
    int arr[100],n,i,j,count=0,sum=0;

    printf("Enter a Positive Number:");
    scanf("%d", &n);

    printf("Enter %d elements: ",n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        if (arr[i]<=1){
            continue;
        }
        for (j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                count++;
                break;
            }
        }
        if (count==0){
            sum=sum+arr[i];
        }
    }
    printf("Sum of all primes: %d\n", sum);
return 0;
}
