#include<stdio.h>
int main()
{

    int Initial_Countdown ;

    printf("Enter the number from where you start the Countdown = ");
    scanf("%d",&Initial_Countdown);

    if(Initial_Countdown > 0)
    {

        while(Initial_Countdown >0)
        {

            printf("Countdown : %d\n",Initial_Countdown);
            sleep(1);
            Initial_Countdown-- ;

        }
        printf("Countdown Completed.!");
    }
    else printf("You have entered negative number which is invalid") ;


    printf("\nID:25CE127\nName:Kushagra Vipulkumar Upadhyay\n");
    return 0;



}
