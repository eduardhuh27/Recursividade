#include <stdio.h>

void binario (int n);

void main()
{

    int n;

    printf("Entre com um numero:");
    scanf("%d",&n);
    
    binario(n);

}

void binario (int n)
{
    if(n>1)
    {
      
        binario(n/2);
          printf("%d",n%2);
        
    
    }
    else
    { 
        if (n==0)
    {
        printf("0");  
    }
    
    else
    {
        if (n==1)
    {
        printf("1");  
    }
    }
    }
}