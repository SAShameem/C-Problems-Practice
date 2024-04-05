// area of rectangle

#include<stdio.h>
int main (){
    float length,width,area;
    printf("Enter Length:");
    scanf("%f",&length);
    printf("Enter Width:");
    scanf("%f",&width);

    area=length*width;

    printf("Area:%.2f",area);

    return 0;

}
