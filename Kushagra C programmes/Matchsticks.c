#include<stdio.h>
int main(){


int match_num= 21 ,m,c,i ;


do {


printf("Enter Matchsticks form 1 to 4 : ");
scanf("%d",&i);

if(i>4 || i<1){


printf("You have entered invalid numbers of matchsticks\n");
printf("Enter a valid number");
continue;

} printf("You have picked up %d matchsticks\n",i);
match_num -=i ;
sleep(1);
printf("Now computer is picking...\n");
sleep(1);
c=5-i ;
printf("Computer picked up %d matchsticks\n",c);
match_num-=c;

if(match_num == 1){
printf("Only 1 matchstick remains\n");
printf("Computer Won , You are a loser ");
break ;
} }

while(1) ;

return 0; }























