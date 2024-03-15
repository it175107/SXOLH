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
double dynami=0;
printf("give an integer number between 2 and 10 : ");
scanf("%d",&num);
while ((num < 2) || (num > 10))
{
    printf("give an integer number between 2 and 10 : ");
    scanf("%d",&num);
}
while (dynami < 100)
{
    dynami=pow(num,i);
    printf("dynami=%d^%d=%lf\n",num,i,dynami);
    i++;
}
 system("Pause");   
}
