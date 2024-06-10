 // Find MAX and MIN num using Array:

#include<stdio.h>
int main(){
    int num[100],n,i;
    printf("How many numbers? :");
    scanf("%d",&n);
    printf("Enter %d Numbers:",n);

// Maximum Num:
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    int max = num[0];

    for(i=1;i<n;i++){
        if(max<num[i])
            max=num[i];
    }
    printf("Maximum Num: %d\n",max);

// Minimun Num:

  // Comment it out when needed to get separate input or use the below code in diffrent file1
 /*
   for(i=0;i<n;i++){
        scanf("%d",&num[i]);
   }
*/
    int min = num[0];

    for(i=1;i<n;i++){
        if(min>num[i])
            min=num[i];
    }
    printf("Minimun Num: %d\n",min);

return 0;
}
