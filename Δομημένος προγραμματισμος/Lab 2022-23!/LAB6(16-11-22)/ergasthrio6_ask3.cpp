#include <stdio.h>
#include <stdlib.h>
 #include <math.h>
main(){
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : Ô12
ERGASTHRIAKH ASKHSH : 3
HMEROMHNIA : 16/11/2022
ONOMA :Nikolaos Amprazis
ARITHMOS MHTRWOY :175107
*/
int n,dynami,sum=0;
do{
	printf("give an integer in [5-20] : ");
	scanf("%d",&n);
  }
  while (n<5 || n>20);
  dynami=pow(n,2);
  int i;
  for(i=1;i<=(2*n)-1;i=i+2){
  	sum=sum+i;
  }
    //printf("dynami=%d\n",dynami);
  	//printf("athroisma orwn=%d\n",sum); 
  // emfanish printf opws thelei h askhsh
  printf("1+3+5+...+(2*%d-1)=%d=%d^2=%d\n",n,sum,n,dynami);
system("pause");	
}
