#include <stdio.h>
#include <stdlib.h>
main() {
int a,a1,b,ginomeno_p=0;
int ginomeno;
printf("give two numbers a and b : ");
scanf("%d %d",&a,&b);

ginomeno=a*b;
printf("a*b=%d\n",ginomeno);

while( b > 0) {
	if (b%2!=0)
		ginomeno_p=ginomeno_p+a;
		printf("ginomeno_p=%d\n",a);
		scanf("%d",&ginomeno_p);
}
printf("emfanise ginomeno_p\n");
system("pause");
}
/*
#include <stdlib.h>
#include <stdio.h>

int main()
{
  // 0. Variables
  int a=0,b=0;
   
  // 1. Get variables from keyboard
  printf("\nGive a and b: ");
  scanf("%d %d",&a,&b);

  // 2. Print on screen the product
  printf("\na*b=%d",a*b);

  // 3. "Russian multiplication"
  int p=0;

  while(b>0)
  {
    printf("\na=%d b=%d, p=%d",a,b,p);
  	
    if (b%2!=0)
      p+=a;
   
    a=2*a;
    b=b/2;   // Integer division
    
  }

  // Last values for a and b
  printf("\na=%d b=%d, p=%d",a,b,p);

  // 4. Print final result
  printf("\np=%d",p);
  return 0;
} */
