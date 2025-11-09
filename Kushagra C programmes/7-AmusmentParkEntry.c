#include<stdio.h>
int main()
{

    int age;
    int fair_price = 300 ;
    printf("Enter your age = ");
    scanf("%d",&age);

    if(age < 0 && age >120)
    {


        printf("You have entered invalid Age");
    }

    else if (age <12)
    {
        printf("Free Entry!");

    }
    else if (age > 60)
    {

        printf("Free Entry!");

    }
    else
    {

        printf("you must pay the Fair Price which is %d",fair_price);
    }


    printf("\nID:25CE127\nName:Kushagra Vipulkumar Upadhyay\n");
    return 0;
}
