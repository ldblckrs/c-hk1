#include <stdio.h>
#include <math.h>

int snt(unsigned int n){
	int i;
	for (i = (n-1); i>=sqrt(n); i--){
		if ((n%i)==0) return 0; }
	return 1;
	}

void checksnt(){
	unsigned int n;
	back1:
	printf("Check snt n = ");
	scanf("%u",&n);
	if (n<=1) {
		printf("Vui long nhap so nguyen duong lon hon 1.\n");
		goto back1; }
	else if (snt(n) == 1) printf("%u la so nguyen to",n);
	else printf("%u khong phai so nguyen to",n);	
	}

void insnt(){
	unsigned int i,n;
	printf("Nhap n = "); 	scanf("%u",&n);
	for (i=2;i<=n;i++)
		if (snt(i) == 1) printf("%u\t",i);
	}
	

int main(){
	checksnt();	printf("\n"); 
	insnt();
}
