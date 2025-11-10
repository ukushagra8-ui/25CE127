#include<stdio.h>
int main()
{

    int i,j,n,k;

    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(k=1; k<=n-i; k++)printf("  ");
        for(j=i; j>=1; j--)
        {
            printf("%d ",j);
        }
        for(j=2; j<=i; j++)printf("%d ",j);

        printf("\n");


    }
    for(i=2; i<=n; i++)
    {

        for(k=1; k<=n-i; k++)printf("  ");
        for(j=i; j>=1; j--)
        {
            printf("%d ",j);
        }
        for(j=2; j<=i; j++)printf("%d ",j);

        printf("\n");


    }





return 0;







}
