#include <stdio.h>
#include <math.h>
#include "conio.h"

int main(){
	int a[100],i,x;  
	double n, ng, tp, ng1;
	scanf("%lf",&n);  	
	
	tp = modf(n,&ng);
	printf("phan thap phan :%lf \nPhan nguyen :%lf \n",tp,ng);
	
	x=ng;
	for(i=0;x>0;i++){  
		a[i]=x%2;  
		x=x/2;  
		}   
	for(i=i-1;i>=0;i--){  
		printf("%d",a[i]);  
		} 
	
printf("\n");
		
/* Phan thap phan chua xong ...
	int ng2,b[100],j ;

	
		ng1=tp*2; printf("%d ..",(int)ng1);
		ng2 = (int)ng1; printf("%d ..",ng2); printf("%lf",tp);
		tp=tp*2 - (double)ng1; printf("%lf",tp);


*/
	return 0;
}
