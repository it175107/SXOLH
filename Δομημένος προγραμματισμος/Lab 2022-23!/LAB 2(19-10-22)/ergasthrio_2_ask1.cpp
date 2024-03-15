#include <stdio.h>
#include <stdlib.h>
main() {
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T12
ERGASTHRIAKH ASKHSH : 2
HMEROMHNIA :19/10/2022
ONOMA :Amprazis Nikolaos
ARITHMOS MHTRWOY :175107
*/

//int
//erwthma 1
int i1,i2,isum;
double dsum;
double dmo;
i1=6;
i2=5;
//erwthma 2
isum=i1+i2;
//erwthma 3
dmo=(double)isum/2; //isum/2.0;
//erwthma 4
printf("isum=%d dmo=%lf\n" ,isum,dmo);
//erwthma 5
dsum=i1+i2;
//erwthma 6
dmo=dsum/2;
//erwthma 7
printf("dsum=%lf dmo=%lf\n", dsum , dmo);

//short
//erwthma 1
short s1,s2,ssum;
s1=5;
s2=6;
//erwthma 2 
ssum=s1+s2;
//erwthma 3
dmo=(double)ssum/2;
//erwthma 4
printf("ssum=%hd dmo=%lf\n", ssum,dmo);
//erwthma 5
dsum=s1+s2;
//erwthma 6
dmo=dsum/2;
//erwthma 7
printf("dsum=%lf dmo=%lf\n" ,dsum,dmo);

//long
//erwthma 1
long l1,l2,lsum;
l1=5;
l2=6;
//erwthma 2
lsum=l1+l2;
//erwthma 3
dmo=(double)lsum/2;
//erwthma 4
printf("lsum=%ld dmo=%Lf\n" ,lsum,dmo);
//erwthma 5
dsum=l1+l2;
//erwthma 6
dmo=(double)lsum/2;
//erwthma 7
printf("dsum=%lf dmo=%lf\n" ,dsum,dmo);

//float
//erwthma 1
float f1,f2,fsum;
f1=5;
f2=6;
//erwthma 2
fsum=f1+f2;
//erwthma 3
dmo=(double)fsum/2;
//erwthma 4
printf("fsum=%f dmo=%lf\n" ,fsum,dmo);
//erwthma 5
dsum=f1+f2;
//erwthma 6
dmo=(double)fsum/2;
//erwthma 7
printf("dsum=%lf dmo=%lf\n" ,dsum,dmo);	

//double
//erwthma 1
double d1,d2;
d1=5;
d2=6;
dsum=d1+d2;
dmo=(double)dsum/2;
printf("dsum=%lf dmo=%lf\n" , dsum,dmo);
system("pause");	
}
