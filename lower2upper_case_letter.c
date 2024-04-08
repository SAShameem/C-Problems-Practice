// Letter: Lower case to upper case converion:
#include<stdio.h>
int main(){
    char lower;
    printf("Enter a lower case letter:");
    scanf("%c",&lower);

    printf("The Upper Case of %c will be %c",lower,lower-32);

return 0;
}
