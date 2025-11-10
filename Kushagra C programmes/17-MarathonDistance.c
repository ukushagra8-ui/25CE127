#include<stdio.h>
int main(){

int minute=0;
float distance=0;

while(1){


minute++;
distance +=0.5;
sleep(1);
printf("Minute %d :Distance Covered = %.1f KM\n",minute,distance);

if(distance>=10.0){printf("Marathon Complete!"); break;}

}
return 0;
}
