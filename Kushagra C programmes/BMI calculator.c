#include<stdio.h>
int main()
{

    float BMI,Height,Weight ;

    printf("Enter your Height (In meter) = ");
    scanf("%f",&Height);

    printf("Enter your weight (In Kgs) = ");
    scanf("%f",&Weight);

    if(Height <= 0)
    {

        printf("Invalid Height\n");

        return 1;
    }
    if(Weight <= 0)
    {

        printf("Invalid Weight\n");

        return 1;
    }

    BMI = Weight/(Height*Height);

    printf("Your BMI is = %.2f\n",BMI);

    if(BMI < 18.5)
    {

        printf("You are in UNDERWEIGHT category");

    }
    else if (BMI >= 18.5 && BMI <= 24.9)
    {

        printf("You are in NORMALWEIGHT category");

    }
    else if (BMI >= 25 && BMI <= 29.9)
    {

        printf("You are in OVERWEIGHT category");



    }
    else
    {
        printf("You are in OBESITY category");

    }
    return 0;




}
