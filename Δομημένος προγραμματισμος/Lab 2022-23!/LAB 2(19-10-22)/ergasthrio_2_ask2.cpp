#include <stdio.h>
#include <stdlib.h>
main()
{
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T12
ERGASTHRIAKH ASKHSH : 2
HMEROMHNIA :19/10/2022
ONOMA :Amprazis Nikolaos
ARITHMOS MHTRWOY :175107
*/
int bhma=80;
int N=1589;
int apostash;
apostash=N*80; // cm
printf("apostash=%d\n" ,apostash);
int km=apostash/100000;
printf("km=%d\n" , km);
int ypol=apostash%100000;
printf("ypol=%d\n" , ypol);
int m=ypol/100;
printf("metra=%d\n" ,m);
int cm=ypol%100;
printf("ekatosta =%d\n" , cm);	
system("pause");
}
