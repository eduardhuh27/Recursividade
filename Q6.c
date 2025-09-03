#include <stdio.h>

int palindromo (int i, int vet[], int quantidade);

void main ()
{
    int quantidade,i,resposta ;
    
    printf("Entre com a quantidade de numeros no vetor:");
    scanf("%d",&quantidade);
    
    int vet[quantidade];
 for (i=0;i<quantidade;i++)
    {
        printf("Entre com um valor:");
        scanf("%d",&vet[i]);
    }
    
     resposta=palindromo(0,vet,quantidade);
    if(resposta==0)
    {
    printf("Nao E um palindromo.");
    }
    else
    {
        printf("E um palindromo");
    }
}
int palindromo (int i , int vet[], int quantidade)
{
    int tamanho=quantidade-1;

    // O i poderia ser i<0
        if(i<=tamanho) 
        {
            if(vet[i]==vet[tamanho])
            {
           return palindromo(i+1,vet,quantidade-1);
            }
            else
            {
                return 0;
            }
        }
         //return 1;       


}
