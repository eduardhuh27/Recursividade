#include <stdio.h>

void invertida (int vet[], int quantidade);

int main ()
{
     int quantidade,i;
    
    printf("Entre com a quantidade de numeros no vetor:");
    scanf("%d",&quantidade);
    
    int vet[quantidade];
 for (i=0;i<quantidade;i++)
    {
        printf("Entre com um valor:");
        scanf("%d",&vet[i]);
    }
}

void invertida (int vet[],int quantidade)
{
    if(quantidade>0)
    {
        printf("%d",vet[quantidade-1]);
        invertida(vet,quantidade-1);

    }


}