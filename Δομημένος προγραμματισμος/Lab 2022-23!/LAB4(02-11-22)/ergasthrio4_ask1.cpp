#include <stdio.h>
#include <stdlib.h>
main()
{
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T12
ERGASTHRIAKH ASKHSH : 4
HMEROMHNIA :02/11/2022
ONOMA : Nikolaos Amprazis
ARITHMOS MHTRWOY :175107
*/

//4.1
int day;
printf("Give me a number from 1 to 7 : ");
scanf("%d",&day);	
if(day==1)
	printf("The first day of a week is Monday.\n");
else if(day==2)
	printf("The second day of a week is Tuesday.\n");
else if(day==3)
	printf("The third day of a week is Wednesday.\n");
else if(day==4)
	printf("The fourth day of a week is Thursday.\n");
else if(day==5)
	printf("The fifth day of a week is Friday.\n");
else if(day==6)
	printf("The sixth day of a week is Saturday.\n");
else if(day==7)
	printf("The seventh day of a week is Sunday.\n");
else
	printf("You gave a wrong number.\n");

//4.2
int x;
printf ("Dose enan akeraio MH ARNHTIKO arithmo gia to x : ");
scanf("%d", &x);
switch(x){
case 0:		printf("x=0\n");
			break;
case 1:
case 3:
case 5:		printf("x=perittos\n");
			break;
case 2:		
case 4:		printf("x=artios\n");
			break;
default:	printf("x>5\n");	
}	
system("pause");
}
