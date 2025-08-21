// Online C compiler to run C program online
#include <stdio.h>

void multiplos( int n, int v,int multiAtual);

void main() 
{
    int n,v;
    
        printf("Entre com um numero n:");
        scanf("%d",&n);
        printf("\nEntre com um limite V:");
        scanf("%d",&v);
    
    multiplos(n,v,n);
    
}
/*
void multiplos( int n, int v)
    {
        int i=1,j=0;
        while(j<v)
        {
            j=n*i;
            printf("%d\n",j);
            i++;
        }
         
        
    }
    */
void multiplos (int n, int v, int multiAtual)
{
    if(multiAtual<v)
    {
        printf("%d ",multiAtual);
        multiplos(n,v,multiAtual+n);
        
    }
    
    
}

