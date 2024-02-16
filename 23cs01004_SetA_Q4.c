#include <stdio.h>

int prime(int m);

int main()
{
    int n, num1, num2;
    printf("Enter number: ");
    scanf("%d", &n);
    for (num1=1; num1<= n/2; num1++)
    {
        num2 = n - num1;
        if (prime(num1) == 1 && prime(num2) == 1)
        {
            printf("%d %d\n", num1, num2);
        }
    }
    return 0;
}

int prime(int m)
{
    for (int i=2; i<m/2; i++)
    {
        if (m%i==0)
        {
            return 0;
        }
    }
    return 1;
} 