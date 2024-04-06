//Temperature Conversion: Fahrenheit to centigrade
#include<stdio.h>
int main(){
    float f,c;
    printf("Enter Fahrenheit:");
    scanf("%f",&f);

    c=(f-32)/1.8;

    printf("In Celcious: %.2f",c);

return 0;
}
