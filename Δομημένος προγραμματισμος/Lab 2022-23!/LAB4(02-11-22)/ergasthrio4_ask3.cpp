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
char praksh;
int a,b;
int apotelesma;
double apot;

printf("give praksh + - * /  : ");
scanf("%c",&praksh);
printf("give 2 integers a,b : ");
scanf("%d %d",&a,&b);

switch(praksh){
case '+':	apotelesma= a+b;
			printf("a+b=%d\n",apotelesma);
			break;
case '-':	apotelesma= a-b;
			printf("a-b=%d\n",apotelesma);
			break;
case '*':	apotelesma= a*b;
			printf("a*b=%d\n",apotelesma);
			break;
case '/':	if (b==0) 
			printf("diairesh me mhden");
			else{
			apot =(double)a/b;
			printf("a/b=%lf\n",apot);
			}
			break;
default:	printf("mh apodekth praksh\n");
}	
system("pause");
}
