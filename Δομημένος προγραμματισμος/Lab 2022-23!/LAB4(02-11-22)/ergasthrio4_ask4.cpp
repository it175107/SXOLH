#include <stdio.h>
#include <stdlib.h>
main(){

/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T12
ERGASTHRIAKH ASKHSH : 4
HMEROMHNIA :06/11/2022
ONOMA : Nikolaos Amprazis
ARITHMOS MHTRWOY :175107
*/

//4.4
int month;
printf("give month : ");
scanf("%d",&month);

switch(month){
case 1:
case 2:
case 12:	printf("xeimwnas\n");
			break;
case 3:
case 4:
case 5:		printf("anoijh\n");
			break;
case 6:
case 7:
case 8:		printf("kalokairi\n");
			break;
case 9:
case 10:
case 11:	printf("f8inopwro\n");
			break;
default:	printf("mh apodektos mhnas\n");
}
	
//4.5

printf("give a number between 1-12 : ");
scanf("%d",&month);

if(month<3 or month==12)
	printf("xeimwnas\n");
else if(month<6)
	printf("anoiji\n");
else if(month<9)
	printf("kalokairi\n");
else if(month<12)
	printf("f8inopwro\n");
else
	printf("mh apodektos mhnas\n");
	
//4.6	
if (month<=2 || month==12)
	printf("xeimwnas\n");
else if(month==3 || month<=5)
	printf("anoiji\n");
else if(month==6 || month<=8)
	printf("kalokairi\n");
else if(month==9 || month<=11)
	printf("f8inopwro\n");
else 
	printf("mh apodektos mhnas\n");
system("pause");
}

