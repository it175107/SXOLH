#include <stdio.h>
#include <stdlib.h>
#define nmax 100
 void fillPin2D(int n,int my2DArray[][nmax]){ 
        int i,j;
        for(i=0;i<=n-1;i++){//grammes
            for(j=0;j<=n-1;j++) { //sthles
                my2DArray[i][j]=rand()%(10-1+1)+1;
            }
    }
}
 void showPin2D(int n,int my2DArray[][nmax]){
    int i,j;
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            printf("%d\t",my2DArray[i][j]);
        }
        printf("\n");
    }
}
void showPin1D(double avgLine[],int n){
    int i;
    printf("avgLine= ");
    for(i=0;i<=n-1;i++)
        printf("%.1lf\t",avgLine[i]);     
}  
void findMeanLine(int n,int my2DArray[][nmax]){
    int i,j,sum;
    double avgLine[n];
    for(i=0;i<=n-1;i++){
        sum=0;
        for(j=0;j<=n-1;j++){
            sum=sum+my2DArray[i][j];
        }
        avgLine[i]=(double)sum/n;
    }
    showPin1D(avgLine,n);
} 
 void findMeanCol(int n,int my2DArray[][nmax]){
        int i,j,sum;
        doouble avgCol[n];
        for(i=0;i<=n-1;i++){
            sum=0;
             for(j=0;j<=n-1;j++){
                sum=sum+my2DArray[i][j];
        }
        avgCol[j]=(double)sum/n;
    }
    showPin1D(avgCol,n);
}
int findSum(int n,int my2DArray[][nmax]
int i,j;
int sum1=0 , sum2=0;
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            if(i==j)
                sum1=sum1+my2DArray[i][j];
            if(i+j==n-1)
                sum2=sum2+my2DArray[i][j];
            }
    }
    int total_sum=sum1+sum_2;
    return total_sum;
}
            
main(){  
int n;
do{
	printf("give a number : ");
	scanf("%d",&n);
}while (n<=5);
int my2DArray[n][nmax];
fillPin2D(n,my2DArray); 
showPin2D(n,my2DArray);   
findMeanLine(n,my2DArray);
findMeanCol(n,my2DArray); //spiti na tin kanw
int total=findSum(n,my2DArray[][nmax]);
 
   
system("Pause");
}
