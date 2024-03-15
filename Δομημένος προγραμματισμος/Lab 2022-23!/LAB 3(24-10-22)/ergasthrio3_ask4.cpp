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
int b1,b2,b3;
double tb,anabathmologhsh;
int mo;
printf("dose dyo bathmologies sthn klimaka toy 100 : ");
scanf("%d %d",&b1,&b2);

mo=(double)(b1+b2)/2;
tb=mo;
anabathmologhsh=(double)((b1+b2+b3)/3);

if(b1-b2<20)
	printf("tb=%lf\n",tb);
else if(b1-b2>20)
	printf("dwse 3h bathmologia : ");
	scanf("%d",&b3);
	printf("anabathmologhsh=%lf\n",anabathmologhsh);
	scanf("%lf",&anabathmologhsh);

system("pause");
}

