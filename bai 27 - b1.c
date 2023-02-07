#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	printf("Nhap do dai 3 canh tam giac: ");
	scanf("%d %d %d",&a,&b,&c);
	if ((a+b)>c && (b+c)>a && (c+a)>b) printf("Tam giac hop le \n");
		else {
		printf("Tam giac khong hop le \n"); 
		goto ketthuc;
	}
	
	if ((a==b) || (b==c) || (c==a)) {
		if ((a+b-2*c) != 0) {
			if  ((pow(a,2) + pow(b,2) == pow(c,2)) || (pow(c,2) + pow(b,2) == pow(a,2)) || (pow(a,2) + pow(c,2) == pow(b,2)))
				printf("Day la tam giac vuong can");
				else printf("Day la tam giac can");
			}
			else printf("Day la tam giac deu");
		}
		
	else if  ((pow(a,2) + pow(b,2) == pow(c,2)) || (pow(c,2) + pow(b,2) == pow(a,2)) || (pow(a,2) + pow(c,2) == pow(b,2))) 
		printf("Day la tam giac vuong");
	else printf("Day la tam giac thuong");
	ketthuc:
	return 0; 
}
