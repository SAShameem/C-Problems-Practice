// Menu based Temperature Conversion:
#include<stdio.h>
int main(){
    int choice;
    float temp,convertedTemp;

    printf("Temperature Conversion Menu:\n");
    printf("(1) Fahrenheit to Celsius\n");
    printf("(2) Celsius to Fahrenheit\n");
    printf("Enter 1 or 2 For Conversion:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: {
                    printf("Enter the Fahrenheit Value:");
                    scanf("%f",&temp);
                    convertedTemp = (temp-32)/1.8;
                    printf("The Temperature in Celsius is : %f\n",convertedTemp);
                    break;
                }
        case 2: {
                    printf("Enter the Celsius Value:");
                    scanf("%f",&temp);
                    convertedTemp = (temp*1.8)+32;
                    printf("The Temperature in Fahrenheit is : %f\n",convertedTemp);
                    break;
                }
        default:
            printf("You Entered Wrong Command. Plz Try Again.\n");
    }


return 0;
}
