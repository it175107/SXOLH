#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T12
ERGASTHRIAKH ASKHSH : 10
HMEROMHNIA : 28/12/2022
ONOMA :Amprazis Nikolaos
ARITHMOS MHTRWOY :175107
*/
struct ypallhlos{
	
char name[50];
int aM;
int eidosPtyxiou;
int yperories;
double misthos;
};
ypallhlos gemismaPedion(char n[],int am,int eidos, int ypero ,double mis ){
	struct ypallhlos yp;
	strcpy(yp.name,n);
	yp.aM=am;
	yp.eidosPtyxiou=eidos;
	yp.yperories=ypero;
	yp.misthos=mis;
	return yp;
}
void emfanisiPedion(ypallhlos yp){
	printf("onoma=%s\n AM=%d\n eidosPtyxiou=%d\n yperories=%d\n misthos=%lf\n", yp.name,yp.aM, yp.eidosPtyxiou,yp.yperories,yp.misthos);
}
void findTMisthos (ypallhlos yp){
	int yper=yp.yperories*20;
	int epidoma;
	switch (yp.eidosPtyxiou){
		case 1:epidoma=300;
		break;
		case 2:epidoma=150;
		break;
		case 3:epidoma=100;
		break;
		case 4:epidoma=50;
		break;
		default:epidoma=0;	
	}
	int telikosMisthos=yp.misthos+yper+epidoma;
	printf("telikosMisthos = %lf\n",telikosMisthos);
}
double returnTMisthos(ypallhlos yp){
	int yper=yp.yperories*20;
	int epidoma;
	switch (yp.eidosPtyxiou){
		case 1:epidoma=300;
		break;
		case 2:epidoma=150;
		break;
		case 3:epidoma=100;
		break;
		case 4:epidoma=50;
		break;
		default:epidoma=0;		
	}
	double telikosMisthos=yp.misthos+yper+epidoma;
	return telikosMisthos;
}
void findMaxTM(ypallhlos yp1,ypallhlos yp2){
	if(returnTMisthos(yp1)>returnTMisthos(yp2))
		printf("yp1>yp2\n");
	else
		printf("yp2>yp1\n");	
}
void swapYp1Yp2(ypallhlos yp1, ypallhlos yp2){
	struct ypallhlos temp=yp1;
	yp1=yp2;
	yp2=temp;
}
main(){
	
struct ypallhlos yp1,yp2;
yp1=gemismaPedion("nikos",175107,1,10,800.0); //statheres times
emfanisiPedion(yp1);

char name[50];
int aM,eidosPtyxiou,yperories;
double misthos;
printf("give name : ");
scanf("%s",name);
printf("give AM : ");
scanf("%d",&aM);
printf("give eidosPtyxiou : ");
scanf("%d",&eidosPtyxiou);
printf("give yperories : ");
scanf("%d",&yperories);
printf("give misthos : ");
scanf("%lf",&misthos);
yp2=gemismaPedion(name,aM,eidosPtyxiou,yperories,misthos);
emfanisiPedion(yp2);

findTMisthos(yp1);
double telMisthos=returnTMisthos(yp2);
printf("tel Misthos =%lf\n",telMisthos);
findMaxTM(yp1,yp2);

struct ypallhlos temp=yp1;
yp1=yp2;
yp2=temp;
printf("ypallhlos yp1 after swap yp1 yp2 : \n");
emfanisiPedion(yp1);
printf("ypallhlos yp2 after swap yp1 yp2 : \n");
emfanisiPedion(yp2);
void swapYp1Yp2(ypallhlos yp1, ypallhlos yp2);
printf("ypallhlos yp1 after swap yp1 yp2 : \n");
emfanisiPedion(yp1);
printf("ypallhlos yp2 after swap yp1 yp2 : \n");
emfanisiPedion(yp2);
system("Pause");
}
