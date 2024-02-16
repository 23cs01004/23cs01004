#include <stdio.h>
int fact(int m);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int copy1 = n;
    int copy2 = n;
    int size=0;
    while(n != 0) 
    {
        n=n/10;
        size++;
    }
    int digit[size];
    int i=0;
    while (i<size)
    {
        digit[i] = copy1%10;
        copy1 = copy1/10;
        i++;
    }
    int sum=0;
    int j=0;
    while (j<size)
    {
        sum = sum + fact(digit[j]);
        j++;
    }
    if (sum==copy2)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not a strong number");
    }
    return 0; 
}

int fact(int m)
{
    int f;
    if (m==0)
    {
        return 1;
    }
    else 
    {
        f = m*fact(m-1);
    }
    return f;
}