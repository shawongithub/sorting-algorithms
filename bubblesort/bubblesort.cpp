#include<stdlib.h>
#include<stdio.h>
void print(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}
void bubblesort(int A[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
            printf("\n");
            print(A,n);
            printf("\n");
        }
    }
}
int main()
{
    int A[]={-2,-3,0,3,2,0,1};
    int n=sizeof(A)/sizeof(A[0]);
    printf("unsorted list:\n");
    print(A,n);
    bubblesort(A,n);
    printf("\nsorted list:\n");
    print(A,n);
}
