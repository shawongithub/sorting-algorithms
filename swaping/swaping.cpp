#include<stdio.h>
#include<stdlib.h>
void print(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}
void swaparray(int *A)
{
    int s;
    s=A[0];
    A[0]=A[1];
    A[1]=s;
}
int main()
{
    int A[]={1,2};
    int n=sizeof(A)/sizeof(A[0]);
    printf("the array before swaping\n");
    print(A,n);
    swaparray(A);
    printf("\nthe array after swaping\n");
    print(A,n);
}
