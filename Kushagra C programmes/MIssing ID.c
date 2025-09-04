#include<stdio.h>
int main()
{

    int n,i,asum=0,esum,missing_ID;

    printf("Enter total ID numbers = ");
    scanf("%d",&n);

    int arr[n-1];

    for(i=0; i<n-1; i++)
    {
        printf("Enter arr[%d] = ",i);
        scanf("%d",&arr[i]);
        asum+=arr[i];





    }
    esum=n*(n+1)/2 ;
    missing_ID = esum - asum ;
    printf("Missing ID is %d ",missing_ID);


return 0;
}
