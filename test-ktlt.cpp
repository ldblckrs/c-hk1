#include <stdio.h>
#include <math.h>

void cau37(){
	int num[]={1,3,5,7,9};
	int *ptr1 = &num[1];
	int *ptr2 = &num[3];
	int n = ptr2 - ptr1;
	printf("%d\n",n);
}

void cau40(){
	int i,n=5;
	for (i=1; i<n; ) printf("%d ",i++);
}

int main(){
	cau40();
	
}
