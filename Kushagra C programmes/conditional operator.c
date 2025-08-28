#include<stdio.h>
int main()

{
    int marks ;
    printf ("Kindly enter your  marks = ");
    scanf("%d",&marks);

    (marks>=0 && marks<=100)?

    (marks>=90)?printf("You obtained Grade A"):
    (marks>=80 && marks <90)?printf("You obtained Grade B"):
    (marks>=70 && marks <80)?printf("You obtained Grade C"):
    (marks>=60 && marks <70)?printf("You obtained Grade D"):
    printf("You obtained Grade F ! Better luck next time") : printf("Invalid marks");

    return 0;
}
