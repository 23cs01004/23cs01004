#include <stdio.h>

int main()
{
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    float sa = 4*(3.14)*r*r;
    printf("Surface area: %.2f\n", sa);
    float vol = (4*(3.14)*r*r*r)/3;
    printf("Volume: %.2f", vol);
    return 0;
}