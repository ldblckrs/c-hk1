#include <stdio.h>
#include <math.h>

int main()
	{	int a,b,t;
		printf("Bai 13 buoi 1: Tim so lon nhat chia het cho b ma khong vuot qua a ...\nNhap gia tri a: " );
		scanf("%d",&a);
		printf("Nhap gia tri b: " );
		scanf("%d",&b);
		
		for ( t = a ; (t % b) != 0 ; t-=1 );
		printf("So chia het cho %d lon nhat khong vuot qua %d la : %d",b,a,t);
		
		return 0;
		
	}
