//uses of tuupper function:

#include<stdio.h>
int main(){
    char lower,upper;
    printf("Enter a Lower case letter:");
    scanf("%c",&lower);

    upper=toupper(lower);

    printf("The Upper case letter will be: %c",upper);

return 0;
}
