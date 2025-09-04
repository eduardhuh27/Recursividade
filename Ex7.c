// Online C compiler to run C program online
#include <stdio.h>
int comumaux (int vet1[] , int vet2[],int q1,int q2);
int comum (int vet1[] , int vet2[],int q1,int q2);

void main ()
{
    int vet1[5]={1,2,5,7,5};
    int vet2[3]={1,8,0};
    printf("%d",comum (vet1, vet2,5,3));
}

int comum (int vet1[] , int vet2[],int q1,int q2)
{ 
    int i;
    if(q1-1>=0)
    {
        i=comumaux( vet1,vet2,q1-1,q2-1);
         return i + comum (vet1 , vet2,q1-1,q2);
    }
    return 0;
}
int comumaux (int vet1[] , int vet2[],int q1,int q2)
{
    if(q2>=0)
    {
        if(vet1[q1]==vet2[q2])
        {
            return 1+ comumaux(vet1,vet2,q1,q2-1);
        }
        return comumaux(vet1,vet2,q1,q2-1);
    }
    return 0;
}
