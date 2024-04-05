// Area of triangle using 3 side of it:
// area= sqrt(s*(s-a)*(s-b)*(s-c))
//s=(a+b+c)/2

#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,area,s;
    printf("Enter 3 Side:");
    scanf("%lf %lf %lf",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area : %.2lf",area);


return 0;
}
