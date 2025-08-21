#include <stdio.h>

void PG (int a1,int q, int cont,int quantidade);

int main ()
{
    int a1,q,termos ;
    
    printf("Entre com o primeiro termo da a1:");
    scanf("%d",&a1);
    printf("Entre com a razao da PG:");
    scanf("%d",&q);
    printf("Entre com o numero de termos que serao exibidos:");
    scanf("%d",&termos);
    
    PG(a1,q,1,termos);
    
    
    
}

void PG (int a1,int q, int cont,int quantidade)
{
    
    if(cont<=quantidade)
    {
        printf("A%d:%d ",cont,a1);
        PG(a1*q,q,cont+1,quantidade);
    }

    
    
    
    
}