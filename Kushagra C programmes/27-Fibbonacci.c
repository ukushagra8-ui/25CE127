#include<stdio.h>
int fibbo(n){

if(n==1||n==2)return 1;


return fibbo(n-2)+fibbo(n-1);




}
int main(){

int n;
printf("Enter the number of month = ");
scanf("%d",&n);

for(int i=1;i<=n;i++){
printf("Month %d :Rs.%d\n",i,fibbo(i));
}

return 0;

}
