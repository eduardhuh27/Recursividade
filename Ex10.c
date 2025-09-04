// Online C compiler to run C program online
#include <stdio.h>

int remover (int vet[],int quantidade,int n);

void main  () 
{
    int vet[5] ={1,2,1,5,1};
    int n=1;
  printf("%d",remover (vet,5, n));
}
int remover (int vet[],int quantidade,int n)
{
    if(quantidade-1>=0)
    {
        if(vet[quantidade-1]==n)
        {
            return  1+ remover (vet,quantidade-1,n);
        }
        
        return   remover (vet,quantidade-1,n);
        
        
    }
    
    return 0;
    
    
    
}
