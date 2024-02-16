#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c, r1,r2;
    printf("Enter a,b,c: ");
    scanf("%f %f %f", &a, &b, &c);
    int d2= (b*b) - (4*a*c);
    if (d2<0)
    {
        printf("Imaginary roots");
    } 
    else 
    {
        r1= ((-b)+sqrt(d2))/2;
        r2= ((-b)-sqrt(d2))/2;
        printf("roots are %f, %f", r1, r2);
    }
    return 0;  
}