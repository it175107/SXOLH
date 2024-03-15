#include <stdio.h>
#include <stdlib.h>
main(){
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : Ô12
ERGASTHRIAKH ASKHSH : 4
HMEROMHNIA : 16/11/2022
ONOMA :Nikolaos Amprazis
ARITHMOS MHTRWOY :175107
*/
int n,npar,i;
do{
	printf("give a number : ");
	scanf("%d",&n);
}
while (n<0 || n>10);{

if(n==0 || n==1){
	npar=1;
	printf("%d =%d",n,npar);}

else  {
	npar=1;
	for(i=2;i<=n;i++){
		npar=npar*i;
}
	}
	printf("%d =%d\n",n,npar);
}
system("pause");
}
