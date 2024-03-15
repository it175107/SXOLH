#include <stdio.h>
#include <stdlib.h>
main(){
/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : Ô12
ERGASTHRIAKH ASKHSH : 6
HMEROMHNIA : 17/11/2022
ONOMA :Nikolaos Amprazis
ARITHMOS MHTRWOY :175107
*/
int n,i=0;

do{
	printf("give an number : ");
	scanf("%d",&n);
}while(n<2 || n>100);
bool protos=true;
for (i=2;i<=(n/2);i++)

	if(n%i==0)
		bool protos=false;
	if (protos==true)
		printf("O arithmos n=%d einai protos\n",n);
	else 
		printf("o arithmos n=%d den einai protos\n",n);
system("pause");
}

/*
int main()
{
    int x;         // Diabazo arithmo in [2,100]
    int protos=1;  // Metabliti tipou BOOL, 0: False, 1: True
    int i;
    int iter;      // Number of checks
    // 1. Read correct number from keyboard
    do
    {
      printf("Give number x in [2,100]: ");
      scanf("%d",&x);
    }
    while ((x<2) || (x>100));
    // 2. Check if it is prime number
    protos=1;
    iter= x /2;     // Integer division
    for (i=2;i<iter;i++)
    {
        if (x % i==0)
          protos=0;      
    }
    // 3. Print result
    printf("\nEinai protos: %d",protos);
    return 0;
} */

