#include <stdio.h>
#include <stdlib.h>
main()
{
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T12
ERGASTHRIAKH ASKHSH : 3
HMEROMHNIA : 24/10/2022
ONOMA :Amprazis Nikolaos
ARITHMOS MHTRWOY :175107
*/
double ypsos,dms;
int age;
printf("give age: ");
scanf("%d",&age);

int baros;
printf("give baros: ");
scanf("%d",&baros);

int cm;
printf("give ypsos se cm: ");
scanf("%d",&cm);

if (age>18)
	{
		ypsos=(double)cm/100; //sxolio katw
		double dms=baros/(ypsos*ypsos);
		if (dms<18.5)
			printf("adunato atomo\n");
		else if(dms>=18.5 && dms<25)
			printf("kanoniko atomo\n");
		else if(dms>=25 && dms<30)
			printf("baru atomo\n");
		else
			printf("yperbaro atomo\n");
	}
	else
		if(age < 18 || age == 18)	
			printf("den mporei na ypologistei o dms\n");
system("pause");
}


/*
#include <math.h>
int varos,age,upsoscm;
double upsosm,dms;
upsosm=(double)upsoscm/100;
dms=varos/pow(upsos,2);
printf("dms=%lf\n",dms);
*/
