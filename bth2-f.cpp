#include <stdio.h>
#include <math.h>
// dung while -> s +=a; a *= (-1)*a*a/
unsigned long long int gt(int x){
	int i=1;	long long int s=1;
	for (;i<=x;i++) s *=i;
	return s;
	}
//===========================================================
float ham1(float x, int i){
	float s;
	s = pow(-1,i)*pow(x,2*i+1)/gt(2*i+1);
	return s;
	}
void bai1(){
	int i ;
	float x,s=0;
	scanf("%f",&x);
	for (i=0; ;i++){
		if (ham1(x,i) < pow(10,-6)) break;
		else s += ham1(x,i);
		}
	printf("sin(%.2f) = %f",x,s); 
	}
//============================================================	
float ham2(float x, int i){
	float s; s = pow(-1,i)*pow(x,2*i)/gt(2*i);
	return s;
	}
void bai2(){
	int i ;
	float x,s=0;
	scanf("%f",&x);
	while (ham1(x,i) > pow(10,-6)){
		s += ham2(x,i); i++;
		}
	printf("cos(%.2f) = %f",x,s); 
	}	
//===========================================================	
int main(){
	bai1();
//	bai2();

}
	
