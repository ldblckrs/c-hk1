#include <stdio.h>
#include <math.h>

int gt(int n){
	int i,s=1;
	for (i=1; i<=n; i++) s=s*i;
	return s; 
	}

double ham1(int x, int i){
	double s;
	s = (pow(-1,i)*pow(x,(2*i)+1))/gt(2*i+1);
	return s;
	}	
	
int main(){
	int x,i=0; double s=0;

	printf("x = "); scanf("%d",&x);
//	while (ham1(x,i)>pow(10,-6)){
//	s += ham1(x,i);
//	i++;
//	}

	for (; i<10; i++) printf("i = %d : %lf\n",i,ham1(x,i));
	printf("%lf",ham1(x,9));
}	

