#include <stdio.h>
#include <stdlib.h>
main()
{
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T12
ERGASTHRIAKH ASKHSH : 3
HMEROMHNIA : 30/10/2022
ONOMA :Amprazis Nikolaos
ARITHMOS MHTRWOY :175107
*/
int kubismos;
int typosoxhmatos;
printf("give kubismos : ");
scanf("%d",&kubismos);
double kostosasfalisis;
int dikyklo=0;
int aytokinhto=1;
printf("give typosoxhmatos : ");
scanf("%d",&typosoxhmatos);

if (kubismos<=125 && typosoxhmatos==0)
	printf("100\n");
else if (kubismos>125 && typosoxhmatos==0)
	printf("140\n");
else if (kubismos<=1400 && typosoxhmatos==1)
	printf("400\n");
else if (kubismos=1401 and kubismos<=1800 && typosoxhmatos==1)
	printf("500\n");
else if (kubismos>1800 && typosoxhmatos==1)
	printf("700\n");
	
	
	
system("pause");
}
