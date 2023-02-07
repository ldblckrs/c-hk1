#include <stdio.h>
#include <math.h>

typedef char xkt[100];

int main(){
	xkt a;
	int i,n;
	printf("n = ");		scanf("%d",&n);
	for (i =0; i<=n; i++) {
		scanf("%c", &a[i]); 
		}
	for (i = 0; i<n; i++) printf("%c",a[i]);
	printf("\n");

}
