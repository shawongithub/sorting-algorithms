#include<stdio.h>
#include<stdlib.h>
void print(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}
void mergealgo(int left[],int right[],int A[],int n,int nl,int rl)
{

    int i,j,k;
    i=0;j=0;k=0;
    while(i<nl&&j<rl)
    {
        if(left[i]<=right[j])
        {
            A[k]=left[i];
            k=k+1;
            i=i+1;
        }
        else
        {
            A[k]=right[j];
            j=j+1;
            k=k+1;
        }
    }
    while(i<nl)
    {

        A[k]=left[i];
        i=i+1;
        k=k+1;
    }
    while(j<rl)
    {

        A[k]=right[j];
        j=j+1;
        k=k+1;
    }
    printf("\nsorted list\n");

    print(A,n);

}
void mergesort(int A[],int n)
{
    if(n<2) return;
    int nl,rl,mid;
    mid=n/2;
    nl=mid;
    rl=n-mid;
    int left[nl];
    int right[rl];
    for(int i=0;i<nl;i++)
    {
        left[i]=A[i];
    }
    printf("\nthe left array is\n");
    print(left,nl);
    for(int i=0;i<rl;i++)
    {
        right[i]=A[mid+i];
    }
    printf("\nthe right array is\n");
    print(right,rl);
    mergesort(left,nl);
    mergesort(right,rl);
    mergealgo(left,right,A,n,nl,rl);
}
int main()
{
    int A[]={3,1,4,2,0,9,1,0};
    int n;
    n=sizeof(A)/sizeof(A[0]);
    print(A,n);
    mergesort(A,n);
    printf("\nthe sorted list is:\n");
    print(A,n);
    return 0;
}
