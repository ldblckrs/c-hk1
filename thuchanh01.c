#include <stdio.h>
#include <conio.h>
#include <math.h>

double bai3(double n){
	double s;
	s = (pow(n,3) + (log(fabs(n-3) + 2) ) / (log(5)) ) / (pow(atan(n-5),2) +1 ) ;
	return s; 
}

double bai4(double x, double y){
	double s;
	s = ( exp(x+y) + log( fabs(pow(x,2)-y) +5 ) ) / ( cos(x+y) - sin(x) +3 );
	return s;
}

int main(){
	double n,x,y;
	printf("Nhap x = "); scanf("%lf",&n);
	printf("g(x) = %.5lf \n",bai3(n));

	printf("Nhap x = "); scanf("%lf",&x);
	printf("Nhap y = "); scanf("%lf",&y);
	printf("g(x,y) = %.5lf",bai4(x,y));


	return 0;
}
