// Temperature Conversion: Centigrade to fahrenheit
#include<stdio.h>
int main(){
    float f,c;
    printf("Enter Celcious:");
    scanf("%f",&c);

    f=(c*1.8)+32;

    printf("In Fahrenheit: %.2f",f);

return 0;
}

