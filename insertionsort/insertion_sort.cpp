#include<stdio.h>
#include<stdlib.h>
void print(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}
void insertion(int A[],int n)
{

    int j,k,sp;
    for(int i=0;i<n;i++)
    {
        k=i;
        for(j=0;j<i;j++)
        {
            if((j+1)>i) break;
            if(A[k]<A[i-(j+1)])
            {

                sp=A[i-(j+1)];
                A[i-(j+1)]=A[k];
                A[k]=sp;
                k=k-1;
            }
        }
   }
}
int main()
{
    int A[]={4,5,0,1,2,-1,-2,9};
    int n=sizeof(A)/sizeof(A[0]);
    printf("unsorted list\n");
    print(A,n);
    insertion(A,n);
    printf("\n\nsorted list\n\n");
    print(A,n);
    return 0;
}
