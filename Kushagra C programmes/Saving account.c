#include<stdio.h>
int main()
{

    int age;
    printf("Enter Age = ");
    scanf("%d",&age);

    if(age>0)
    {
        if(age>=18)
        {

            printf("You are eligible to open saving account");
        }
        else printf("You are not eligible to open a saving account. Thank you for coming");

    }
    else printf("You have entered invalid age!  Try again.");

    return 0;


}
