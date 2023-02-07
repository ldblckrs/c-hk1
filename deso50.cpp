
#include <stdio.h>

 
int ckn(int k, int n){
	if ((k==0) || (k==n)) return 1;
	return ckn(k-1,n-1) + ckn(k,n-1);
}
void output1( int h )
{
    int i, j;
    for( i=0; i<h; i++ )
    {
        for (j=1; j<=((h*4)/2)-2*i; j++)
            printf(" ");
        for( j=0; j<=i; j++ )
            printf( "%4d", ckn(j,i) );
        printf( "\n" );
    }
}
 
void cau1()
{
    int n, k;
     back:;
    printf("k = "); scanf("%d",&k);
    printf("n = "); scanf("%d",&n);
    
 
    if (k>n) { printf("Vui long nhap k <= n\n"); goto back; }
    printf("Ckn = %d\n",ckn(k, n));
    output1(10);
}
typedef int array[1000];

int input(array A, int n){
	int i,k;
	for (i=0; i<n; i++) {
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
	}
	back2:;
	printf("k = ");scanf("%d",&k);
	if ((k<0) || (k>=n)) {
		printf("Vui long nhap k duong va khong vuot qua n-1\n");
		goto back2;
	}
	return k;
}

void remove(array A, int n){
	int k = input(A,n);
	int i;
	for (i = k; i<n-1; i++) A[i] = A[i+1];
	}	

void output2(array A, int n){
	int i;
	for (i=0; i<n-1; i++) printf("%d\t",A[i]);
}

void cau2(){
	array A;
	int n;
	printf("n = ");scanf("%d",&n);
	remove(A,n);
	printf("Mang sau khi xoa phan tu o vi tri k:\n");
	output2(A,n);
}

int main(){
	cau2(); 
}

