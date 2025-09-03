#include <stdio.h>

//void preencher(int vet[], int quantidade);
int PA (int vet[],int quantidade);

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
    
     resposta=PA(vet,quantidade);
    if(resposta==0)
    {
    printf("Nao esta em PA.");
    }
    else
    {
        printf("Esta em PA.");
    }
}

int PA(int vet[],int quantidade)
{
    //calculo da razão em diversos momentos, gasta muita memoria desnecessariamente
    int razao;
    razao= vet[1]-vet[0];
   // printf("%d\n",razao);
 //poderia ser quantidade>2
    if(quantidade>1)
  {
    if(razao==vet[quantidade-1]-vet[quantidade-2])
    {
        //printf("%d ",vet[quantidade-1]);
        return PA(vet,quantidade-1);
        
    }
    else
    {
        return 0;
    }
    
  }
    //return 1;
}














/*
void preencher(int vet[], int quantidade)
{
    int i;

    if(i<quantidade)
    {
        printf("Entre com um valor:");
        scanf("%d",vet[i]);
        preencher(vet,quantidade,i+1);
    }
  
    for (i=1;i<quantidade;i++)
    {
        printf("Entre com um valor:");
        scanf("%d",vet[i]);
    }
    
    
    PA(vet, quantidade);
   }
   
  */
