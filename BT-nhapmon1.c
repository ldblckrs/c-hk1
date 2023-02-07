r#include <stdio.h>

#include <math.h>

// Gom bai tap 1,2,5,6 bai Nhap mon tin hoc !
long long int gt(int nhap){
	int i=1 ;
    long long int s = 1;
    for (i; i <= nhap; i++) s = s*i ;
    return s; 
    }

long long int gtc(int nhap){
	int i=1;
	long long int s = 1;
	for (i; i <= nhap; i++)	s = s*i ;
	s = s* pow(2,nhap);
	return s;
	}

double bai5(int x, int n){
	int i=1;
	double s=0;
	for (i; i <= n; i++) s+= (pow(x,i)/gt(i));
	return s;
	}
	
double bai6 (int n){
	int i=3;
	double s=0;
	for (i; i<=n; i++){
		int j=3, tong=0;
		for (j; j<=i; j++) tong+=j;
		s+= gt(i)/(double)tong; }
	return s;
	}
	
	
int main() {
	int n,x ;
	printf("Nhap n=");
    scanf("%d", &n);
    printf("Nhap x=");
	scanf("%d", &x);

// Bai 1
    printf("Bai 1: %lld \n", gt(n));
// Bai 2    
    printf("Bai 2: %lld \n", gtc(n));
// Bai 5
	printf("Bai 5: %.3lf \n", bai5(x,n));   
// Bai 6
	printf("Bai 6: %.3lf", bai6(n));
    
return 0;
	
}
