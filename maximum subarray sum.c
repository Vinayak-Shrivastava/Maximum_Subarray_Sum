#include<stdio.h>
int max = -2147483648;

int max_subarr_sum( int A[], int n )
{
    int a=0,b,i,s=0;
    for(a=0;a<n;a++)
    {
        for(b=a;b<n;b++)
        {
            for(i=a;i<=b;i++) s += A[i];
            if(s > max) max = s;
            s = 0;
        }
    }
    return max;
}

int main()
{
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter an array with %d elements : ",n);
    for(i=0;i<n;i++) scanf("%d",&A[i]);
    printf("The maximum sub-array sum for this array = %d",max_subarr_sum(A,n) );
    return 0;
}
