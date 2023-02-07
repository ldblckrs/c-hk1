#include <stdio.h>

#include <math.h>

int main(){
	int a,b,c;
	double delta, x1, x2;
	printf(" GIAI VA BIEN LUAN PHUONG TRINH BAC 2 \n       aX^2 + bX + c = 0 \n \n" );
	printf("a = "); scanf("%d",&a);
	printf("b = "); scanf("%d",&b);
	printf("c = "); scanf("%d",&c);
	
	printf("Phuong trinh da cho : %dx^2 + %dx + %d = 0\n", a,b,c);
	delta = pow(b,2) - 4*a*c;
	if (delta < 0) printf("Phuong trinh vo nghiem.");
	else if (delta == 0) {
		x1 = -b/(2*a);
		printf("Phuong trinh co nghiem kep la : x = %.2lf", x1 ); 
		}
	else {
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2lf, x2 = %.2lf", x1,x2);
	}
	return 0;
}
