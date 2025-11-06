#include<stdio.h>
int main()
{


    int odd=0,even=0,positive=0,negative=0,i;
    int num[26];
    for(i=0; i<25; i++)
    {


        printf("Enter a Number of num[%d] position: ",i);
        scanf("%d",&num[i]);

        if(num[i] >= 0)
        {

            positive ++;
        }

        else {negative++;}

        if(num[i]%2==0)
        {

            even++;
        }
        else {odd++ ;}



    }
    printf("Total Even Numbers :%d\n",even);
    printf("Total Odd Numbers :%d\n",odd);
    printf("Total Positive Numbers :%d\n",positive);
    printf("Total Negative Numbers :%d\n",negative);

    printf("\nID:25CE127\nName:Kushagra Vipulkumar Upadhyay\n");
    return 0;

}
