#include<stdio.h>
#include<stdlib.h>
void print(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}
void selection(int A[],int n)
{
    int i,j,minindex,swapvalue;
    for(i=0;i<n;i++)
    {
        minindex=i;
        for(j=i+1;j<n;j++)
        {
            if(A[minindex]>A[j])
            {
                minindex=j;
            }
        }
        if(minindex!=i)
        {
            swapvalue=A[i];
            A[i]=A[minindex];
            A[minindex]=swapvalue;
        }
    }

}
int main()
{
   int A[]={5,1,0,3,9,4};
   int n=sizeof(A)/sizeof(A[0]);
   printf("the unsorted list is:\n");
   print(A,n);
   selection(A,n);
   printf("\nthe sorted list:\n");
   print(A,n);
   return 0;
}
