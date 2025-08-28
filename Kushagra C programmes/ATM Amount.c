#include<stdio.h>
int main()
{

    int TA=5000,Amount,RA,choice ;

    while(1)
    {
        printf("Enter 1 for withdraw and 2 for exit \n");
        printf("Enter Choice = ");
        scanf("%d",&choice);

        switch(choice)
        {

        case 1:


            printf("Kindly Enter Amount : ");
            scanf("%d",&Amount) ;

            if(Amount <= TA)
            {

                TA = TA - Amount ;
                printf("Your Remaining amount is =%d Rs\n",TA);

            }

            else
            {
                printf("You do not have sufficient amount\n");
            }

            break;

        case 2 :
            return 1;
            break;

        default :
            printf("Invalid Choice... Please Try Again\n" );

        }

    }

    return 0;





}
