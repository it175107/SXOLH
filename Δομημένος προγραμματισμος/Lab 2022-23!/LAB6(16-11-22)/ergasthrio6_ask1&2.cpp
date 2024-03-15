#include <stdio.h>
#include <stdlib.h>
main(){
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : Ô12
ERGASTHRIAKH ASKHSH : 1,2
HMEROMHNIA : 16/11/2022
ONOMA :Nikolaos Amprazis
ARITHMOS MHTRWOY :175107
*/
int i,j;
int apotelesma;
do{
	printf("give an mumber : ");
	scanf("%d",&i);
}
while (i<1 || i>10);

for(j=1;j<=10;j++){
	apotelesma=i*j;
	printf("%d*%d=%d\t",i,j,apotelesma);
}	
//ask 6.2
int k,m;
for(k=1;k<=10;k++){
	for(m=1;m<=10;m++){
		apotelesma=k*m;
		printf("%d*%d=%d\t",k,m,apotelesma);
	}
	printf("\n");
}
system("pause");
}
