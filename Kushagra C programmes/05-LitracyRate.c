#include<stdio.h>
int main()
{
    float TP = 1441981744.0,TM,TW,TL,TLM,TLW,TILP,TILM,TILW;

    printf("Total population is =%f\n",TP);
    printf("Total women is = %f\n", TW = (TP*48.4/100));
    printf("Total men is = %f\n",TM = TP - TW);
    printf("Total Litrate Citizens = %f\n",TL =  (TP*85.95/100));
    printf("Total Illitrate Citizens = %f\n",TILP =TP - TL);


    printf("Total Litrate Men = %f\n",TLM = (TM*80.95/100));
    printf("Total Litrate Women = %f\n",TLW = (TW*62.84/100));
    printf("Total Illitrate Men = %f\n",TILM = TM - TLM);
    printf("Total Illitrate Women = %f\n",TILW = TW - TLW);


    printf("\nID:25CE127\nName:Kushagra Vipulkumar Upadhyay\n");
    return 0;




}

