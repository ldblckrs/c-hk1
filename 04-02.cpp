#include <stdio.h>
#include <math.h>

typedef double m2c[100][100];

void hvi(double *a, double *b)
{
	double temp;
	temp = *a;
	*a = *b;
	*b = temp; 
}
	

void nhap(m2c A,int n)
{
	int i,j;
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++) 
		{
			printf("A[%d][%d] = ",i+1,j+1);
			scanf("%lf",&A[i][j]);
		}
	}
}

void xuat(m2c A, int n)
{
	int i,j;
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++) 
		{
			if ((A[i][j])== ceil(A[i][j]))  printf("%.0lf\t",A[i][j]);
			else 							printf("%.2lf\t",A[i][j]);
		}
		printf("\n\n");
	}
}

double dthuc(m2c A, int n){
	// Tinh dinh thuc cua a
	int p,q; m2c B;	for (p=0; p<n; p++)	for (q=0; q<n; q++) B[p][q] = A[p][q];
	
 	int i,j,k,sign=1; double temp,det=1;
 
    for (i = 0; i < n-1; i++)
        {
            if (B[i][i] == 0) 
                {
                    k = i+1;
                    while (k < n && B[k][i] == 0) k++;
                    if (k==n) return 0; 
                    for (j = i; j < n; j++)		hvi(&B[i][j], &B[k][j]);              
                    sign = -sign; //  khi doi cho 2 hàng cua 1 'det' thi 'det' doi dâu
                }
            for (j = i+1; j < n; j++)
                {
                    temp = -B[j][i]/B[i][i];
                    for (k = i+1; k < n; k++)   B[j][k] += temp*A[i][k]; 
                }
            det *= B[i][i];
        }
    det *= sign*B[n-1][n-1]; 
    return det;
}
int main(){
	m2c A; double detA;
	int n;
	printf("Nhap kich thuoc MTV A cap n = ");	scanf("%d",&n);
	nhap(A,n);	xuat(A,n); detA = dthuc(A,n);
	printf("%.2lf",detA); xuat(A,n);
	
	
}
