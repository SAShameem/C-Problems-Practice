//Letter: Upper case to lower case conversion:
#include<stdio.h>
int main(){
    char upper;
    printf("Enter a Upper case letter:");
    scanf("%c",&upper);

    printf("The lower  case of %c will be %c",upper,upper+32);

return 0;
}
