#include<stdio.h>
int main()
{

    int choice,total = 0;

    printf("WELCOME TO FOODIES RESTRUANT\n");
    printf("Please Choose your order from below menu\n");



    while(1)
    {
        printf("1.Burger = 150 rs\n");
        printf("2.Pizza = 200 rs\n");
        printf("3.Past = 120 rs\n");
        printf("4.Sandwich = 100 rs\n");
        printf("5.French fries = 80 rs\n");


        printf("If you do not want to order further please enter 0\n");
 printf("Enter menu number = ");
         scanf("%d",&choice);

        switch(choice) {
        case 1 :
        total += 150;
        printf("Your total amount is = %d\n",total);
        break;

    case 2:
        total += 200;
        printf("Your total amount is = %d\n",total);
        break;

    case 3:
        total += 120;
        printf("Your total amount is = %d\n",total);
        break;

    case 4:
        total += 100;
        printf("Your total amount is = %d\n",total);
        break;

    case 5:
        total += 80;
        printf("Your total amount is = %d",total);
        break;

    case 0 :
        printf("Order is completed\n Your total amount is = %d\n",total);
            printf("Thank You For Coming\n");


        return 0;

    default :
        printf("Invalid Choice please try again\n");


     } }

    return 0;

}
