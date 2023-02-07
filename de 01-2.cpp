#include <stdio.h>
#include <math.h>

typedef int mang1[100];

void nhapm1(mang1 a,int n){
	int i;
	for (i =0; i<n; i++) {
		printf("a[%d] = ",i);
		scanf("%d", &a[i]); 
		}
	}

void xuatm1(mang1 a,int n){
	int i;
	for (i = 0; i<n; i++) printf("%d\t",a[i]);
	printf("\n");
	}

int caua(mang1 a){
	int n;
	printf("n = ");		scanf("%d",&n);
	nhapm1(a,n);		xuatm1(a,n);
	return n;
	}

int check(int n){
	int i,s=0;
	for (i=(n-1); i>0; i--) if((n%i)==0) s+=i;
	if (s==n) return 1;
	return 0;
	}
	
void caub(mang1 a, int n){
	int i=0;
	printf("Cac so hoan hao la:");
	for (; i<n; i++){
		if (check(a[i])) printf("%d, ",a[i]);
		}
	}

int main(){
	mang1 a;
	caub(a,caua(a));
	
}
	
