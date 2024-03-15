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
	int a,b,c;
	printf("dwse 3 arithmous: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(b>c)
			printf("Descending order a=%d b=%d c=%d\n",a,b,c);
		else
		{
			if(a>c)
				printf("Descending order a=%d c=%d b=%d\n",a,c,b);
			else
				printf("Descending order c=%d a=%d b=%d\n",c,a,b);
		}	
	}
	else
	{
		if(a>c)
			printf("Descending order b=%d a=%d c=%d\n",b,a,c);
		else
		{
			if(b>c)
				printf("Descending order b=%d c=%d a=%d\n",b,c,a);
			else
				printf("Descending order c=%d b=%d a=%d\n",c,b,a);
		}		
	}
	
	system("pause");
}

