#include<stdio.h>
#define ROWS 5
#define COLUMN 10

int main(){


char seating[ROWS][COLUMN];
int reserved_seat, row, Column,i,j ;

for(int i=0;i<ROWS;i++){
for(int j=0;j< COLUMN; j++){
seating[i][j]='0';
}



}
printf("Enter number of reserved seats: ");
scanf("%d",&reserved_seat);

for(i=0;i<reserved_seat;i++){

printf("Enter row and seat number for reserved seat %d (e.g. 2 5) : ",i+1);
scanf("%d %d",&row,&Column);

if(ROWS>=1 && row<=ROWS && Column>+ 1 && Column<=COLUMN ){


seating[row-1][Column-1]='X'; }

else { printf("Invalid Seat number/location\n");
i--;
}

}


printf("\n******Seating Chart*******\n");
for(i=0;i<ROWS;i++){
printf("Row %d: ",i+1);
for(j=0;j<COLUMN;j++){

printf("%c ",seating[i][j]);
}
printf("\n");
}
 return 0; }




