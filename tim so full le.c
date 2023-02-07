#include <stdio.h>
#include <math.h>


int check(int n){
	while(n>=1){
		int r = n % 10;
		if(r%2==0) return 0;
			else n/=10;
		}
	return 1;
}
int main(){
	int n,sl=0;
	printf("Nhap so luong: ");
	scanf("%d",&n);
	int a[n];
	int i;
	printf("\nNhap cac so: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if (check(a[i])){
			sl++;
			printf("%d	",a[i]);
		}
	}
	printf("\n%d",sl);
	return 0;
}
