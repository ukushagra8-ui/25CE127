#include<stdio.h>
int main()
{


    int Amount;
    float Discount,Total_Amount;


    printf("Enter The Price = ");
    scanf("%d",&Amount);

    if(Amount < 1000 && Amount >0)
    {
        printf("You will not get discount\n");
    }

    else if(Amount>=1000 && Amount<=5000)
    {
        printf("10 percent DISCOUNT IS APPLIED\n");
        Discount =  (Amount*0.1);
        printf("You will get %f rs discount\n",Discount);
        printf("Your final price is = %f\n",Total_Amount = Amount - (Amount*0.1));
    }

    else if(Amount >5000)
    {
        printf("You will get 20 percent Discount\n");

        printf("You will get %f rs discount\n",Discount = (Amount*0.2));
        printf("Your final price is = %f\n",Total_Amount = Amount - Discount);



    }
    else
    {
        printf("You have entered an invalid amount");
    }

    return 0;
}






