#include <stdio.h>
int fatorialR (int n);
int fatorial (int n);

int main ()
{
 int n=7,x=6;

    printf("Fatortial de n: %d %d",fatorialR(x),fatorial(n));   
}

int fatorial (int n)
{
    int i,fat=1;

    for(i=1;i<=n;i++)
    {
        fat*=i;
    }
    return fat;
}

int fatorialR (int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fatorialR(n-1);
}
