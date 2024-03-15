#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T12
ERGASTHRIAKH ASKHSH : 5
HMEROMHNIA :11/11/2022
ONOMA :Amprazis Nikolaos
ARITHMOS MHTRWOY :175107
*/    
int num;
int i=1;
double dynami=1;
do
{
printf("give an integer number between 2 and 10 : ");
scanf("%d",&num);
}
while ((num < 2) || (num > 10));
do{
    dynami=dynami*num;
    printf("dynami=%d^%d=%lf\n",num,i,dynami);
    i++;
}
while (dynami < 100);
 system("Pause");   
}
