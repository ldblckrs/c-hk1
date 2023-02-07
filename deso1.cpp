#include <stdio.h>
#include <math.h>

typedef int m1c[1000];

void nhap(m1c a, int n, char A){
	int i;
	for (i=0; i<n; i++){
		printf("%c[%d] = ",A,i);
		scanf("%d",&a[i]);
	}
}

void xuat(m1c a, int n, char A){
	int i;
	for (i=0; i<n; i++){
		printf("%d\t",a[i]);
	}
}

void shh(m1c a, int n){
	int i,j;
	for (i=0; i<n; i++){
		int temp = 0;
		for (j=1; j< a[i]; j++){
			if ((a[i]%j)==0) temp +=j;
		}
		if (temp == a[i]) printf("%d\t",a[i]);
	}	
}

int main(){
	m1c a;	int n;
	scanf("%d",&n);
	nhap(a,n,'A');	xuat(a,n,'A');	printf("\n");
	shh(a,n);
}

