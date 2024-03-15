#include <stdio.h>
#include <stdlib.h>
main()
{
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T12
ERGASTHRIAKH ASKHSH : 3
HMEROMHNIA : 29/10/2022
ONOMA :Amprazis Nikolaos
ARITHMOS MHTRWOY :175107
*/
int barosepistolis;
printf("give barosepistolis se gr : ");
scanf("%d",&barosepistolis);
int proorismos;
int proorismoseswterikoy=0;
int proorismosekswterikoy=1;
printf("give proorismos : ");
scanf("%d",&proorismos);

if (barosepistolis>=0 and barosepistolis<=500 && proorismos==0)
	printf("2.0\n");
else if (barosepistolis>=0 and barosepistolis<=500 && proorismos==1)
	printf("4.8\n");
if (barosepistolis>500 and barosepistolis<=1000  && proorismos==0)
	printf("3.5\n");
else if (barosepistolis>500 and barosepistolis<=1000  && proorismos==1)
	printf("7.2\n");
if (barosepistolis >1000 && proorismos==0)
	printf("4.6\n");
else if (barosepistolis>1000 && proorismos==1)
	printf("11.5\n");
	
system("pause");
}
