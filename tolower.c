//uses of tuupper function:

#include<stdio.h>
int main(){
    char lower,upper;
    printf("Enter a Upper case letter:");
    scanf("%c",&upper);

    lower=tolower(upper);

    printf("The Lower case letter will be: %c",lower);

return 0;
}
