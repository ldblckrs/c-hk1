#include <stdio.h>
#include <math.h>

/*
int main(){
	double x,y,a1,b1,c1,a2,b2,c2;
	printf("Giai he phuong trinh 2 an x,y. \nVui long nhap cac he so:\n");
	printf("a1 = "); scanf("%lf",&a1);	printf("b1 = "); scanf("%lf",&b1);	printf("c1 = "); scanf("%lf",&c1);
	printf("a2 = "); scanf("%lf",&a2);	printf("b2 = "); scanf("%lf",&b2);	printf("c2 = "); scanf("%lf",&c2);
	
	y = (c1*a2 - c2*a1)/(b1*a2 - b2*a1);
	x = (c1 - b1*y)/a1;
	printf("x = %.3lf	y = %.3lf", x,y);
	return 0;	
}
*/

int main(){
	double c; int f;

	for (f=0; f<=300; f+=20){
		c = 5.0*(f-32)/9;
		printf("%d*F = %.2lf*C\t",f,c);
	}	
	return 0;
}
