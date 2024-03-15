#include <stdio.h>
#include <stdlib.h>

main()
{
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T12
ERGASTHRIAKH ASKHSH : 3
HMEROMHNIA : 1/11/2022
ONOMA :Amprazis Nikolaos
ARITHMOS MHTRWOY :175107
*/
int kwh;
double kostos,kostos1,kostos2;
printf("give kwh : ");
scanf("%d",&kwh);

kostos=kwh*0.20;
kostos1=200*0.20 + (kwh-200)*0.35;
kostos2=200*0.20 + 600*0.35+(kwh-800)*0.50;

if(kwh<=200)
	printf("kostos=%lf\n",kostos);
else if (kwh>200 and kwh<=800)
	printf("kostos1=%lf\n",kostos1);
else if(kwh>1000)
	printf("kostos2=%lf\n",kostos2);
system("pause");
}
