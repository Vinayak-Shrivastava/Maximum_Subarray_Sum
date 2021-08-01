#include<stdio.h>
int max = -2147483648;                       // max variable taken as the minimum integer number possible

int max_subarr_sum( int A[], int n )          //find the required max sum
{
    int a=0,b,i,s=0;                         // a and b are used to create a subarray
    for(a=0;a<n;a++)                          // a makes the left end of subarray . it runs through the whole array from left to right
    {
        for(b=a;b<n;b++)                     // b makes the right end of a subarray by running from a to right end
        {
            for(i=a;i<=b;i++) s += A[i];         // i is used to traverse the created subarray and the sum of elements is calculated
            if(s > max) max = s;                  //if the sum is greter than current max value then update max value
            s = 0;
        }
    }
    return max;                               //return the obtained max value
}

int main()
{
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);                                    //input n
    int A[n];
    printf("Enter an array with %d elements : ",n);                                 
    for(i=0;i<n;i++) scanf("%d",&A[i]);                         //input the array A
    printf("The maximum sub-array sum for this array = %d",max_subarr_sum(A,n) );          //call function to get required number and print
    return 0;
}
