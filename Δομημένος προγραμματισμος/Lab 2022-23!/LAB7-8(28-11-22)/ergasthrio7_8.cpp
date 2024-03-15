#include <stdio.h>
#include <stdlib.h>
void fillPin(int k,int p[]){
	//gemisma pinaka apo tyxaious arithmous
	//(rand() % (b - a +1)) + a mas ton dinei etoimo kanoume mono antikatastasi
	int i;
	for (i=0;i<=k-1;i++)
	p[i]=rand() % (10-1+1)+1;
}
void showPin(int k,int p[])
{
	//emfanisi pinaka
	int i;
	for(i=0;i<=k-1;i++)
		printf("p[%d]=%d\n",i,p[i]);
}
int findThesiMax(int n,int pin[]){
	//briskw to max stoixeio kai thesi
	//epistrefw ti thesh
	int max=pin[0];
	int thesi=0;
	int i;
	for(i=0;i<=n-1;i++){
		if(pin[i]>max){
			max=pin[i];
			thesi=i;
		}
	}
	return thesi;	
}
int findThesiMin(int n,int pin[]){
	int min=pin[0];
	int thesi=0;
	int i;
	for(i=0;i<=n-1;i++){
		if(pin[i]<min){
			min=pin[i];
			thesi=i;
		}
	}
	return thesi;
}
int countAvg(int n,int pin[]){
	int i,sum=0;
	for(i=0;i<=n-1;i++){
		sum=sum+pin[i];
	}
	double mo=(double)sum/n;
	printf("mo=%lf\n",mo);
	int counter=0;
	for(i=0;i<=n-1;i++){
		if(pin[i]>mo)
			counter++;	
}
return counter;
}
int searchPThesiNum(int n,int pin[],int num)
{
	int thesi=-1;
	int i;
	for(i=0;i<=n-1;i++){

void bubbleDesc(int n,int pin[]){
	int plithos,i,temp;
	for(plithos=n-1;plithos>=1;plithos--){
		for(i=0;i<=plithos-1;i++){
			if(pin[i]<pin[i+1]){
				temp=pin[i];
				pin[i]=pin[i+1];
				pin[i+1]=temp;
			}
		}
	}
}
void binarysearchPThesiNum(int num,int pin[],int arxi,int telos){
	int thesi=-1,mesi;
	while(arxi<=telos && thesi==-1){
		mesi=(arxi+telos)/2;
		if(num==pin[mesi])
			thesi=mesi;
		else{
			if(num>pin[mesi])
				telos=mesi-1;
			else
				arxi=mesi+1;
		}
	}
		if(thesi==-1)
			printf("not found!\n");
		else 
			printf("thesi=%d,num=%d\n",thesi,num);
	}
void swapPin(int x,int y,int pin[]){
	int temp;
	temp=pin[x];
	pin[x]=pin[y];
	pin[y]=temp;
}
main()
{
int n,num;
do{
	printf("give number n : ");
	scanf("%d",&n);
}while (n<=5);
int pin[n];
fillPin(n,pin);
showPin(n,pin);
int maxThesi=findThesiMax(n,pin);
printf("thesiMax=%d , max=%d\n",maxThesi,pin[maxThesi]);
int minThesi=findThesiMin(n,pin);
printf("thesiMin=%d , min=%d\n",minThesi,pin[minThesi]);
int count=countAvg(n,pin);
printf("countAvg = %d\n",count);
printf("give number : ");
scanf("%d",&num);
int thesi=searchPThesiNum(n,pin,num);
if(thesi==-1)
	printf("not found!\n");
else
	printf("thesi=%d,num=%d\n",thesi,num);
bubbleDesc(n,pin);
showPin(n,pin);
printf("give number : ");
scanf("%d",&num);
binarysearchPThesiNum(num,pin,0,n-1);
int index=rand()%(n-2-0+1)+0;
swapPin(index,index+1,pin);
showPin(n,pin);
system("pause");
}
