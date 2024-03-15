#include <stdio.h>
#include <stdlib.h>
main() {
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T12
ERGASTHRIAKH ASKHSH : 5
HMEROMHNIA :11/11/2022
ONOMA :Amprazis Nikolaos
ARITHMOS MHTRWOY :175107
*/ 
int xoritikotita;
int epit; 
int aithouses=0;
int sum_epit=0;
int sum_theseis=0;
do{
    printf("Give an integer number : ");
    scanf("%d",&xoritikotita);
    if(xoritikotita<=15)
         epit=1;
    else if(xoritikotita <=23)
        epit=2;
    else 
        epit=3;
printf("Apaitountai %d epitirhtes\n",epit);
sum_epit=sum_epit+epit;
aithouses=aithouses+1;
sum_theseis=sum_theseis+xoritikotita;
}
while (sum_theseis < 100);
printf("synolo aithouswn=%d\n",aithouses);
printf("synolo epitirhtwn=%d\n",sum_epit);
printf("synolo thesewn=%d\n",sum_theseis);

system("Pause");   
}
