#include<stdio.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
void print(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}
int fpartition(int *A,int startindex,int endindex,int n)
{
    int pindex,i,s;
    pindex=startindex;
    int pivotvalue=A[endindex];
    for(i=startindex;i<endindex;i++)
    {
        if(A[i]<=pivotvalue)
        {
            swap(A[i],A[pindex]);
            pindex=pindex+1;
        }
    }
    s=A[pindex];
    A[pindex]=A[endindex];
    A[endindex]=s;

    printf("\npartitioned\n");
    print(A,n);
    return pindex;
}
void quicksort(int *A,int startindex,int endindex,int n)
{
    if(startindex<endindex)
    {
    int pindex;
    pindex=fpartition(A,startindex,endindex,n);
    quicksort(A,startindex,pindex-1,n);
    quicksort(A,pindex+1,endindex,n);
    }

}
int main()
{
    int A[]={5,4,0,2,1};
    int n=sizeof(A)/sizeof(A[0]);
    printf("initial unsorted array:\n");
    print(A,n);

    quicksort(A,0,n-1,n);
    printf("\nsorted list\n");
    print(A,n);
    return 0;
}
