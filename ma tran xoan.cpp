#include <stdio.h>

typedef int matrix[100][100];
struct adress{	int x;	int y;	};

//ham in ma tran
void prm(matrix a, int m, int n){
	int i,j;
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n\n");
	}
}

// tim kiem vi tri phan tu "what"
adress search(matrix a, int m, int n, int what){
	int i,j;
	adress s;
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			if (a[i][j] == what) {
				s.x = j; s.y = i;
				return s;
			}
		}
	}	
}

// dien tiep vao cho trong gan nhat
int fill(matrix a, int m, int n, int *t){
	adress s = search(a,m,n,*t-1);
	if ((s.y==1) && (s.x==0) && (a[s.y][s.x+1] == 0)) 		
									{ a[s.y][s.x+1] = *t; return 0;} 
	if (a[s.y-1][s.x] == 0) 		{ a[s.y-1][s.x] = *t; return 0;}
	else if (a[s.y+1][s.x] == 0) 	{ a[s.y+1][s.x] = *t; return 0;}
	else if (a[s.y][s.x-1] == 0) 	{ a[s.y][s.x-1] = *t; return 0;}
	else if (a[s.y][s.x+1] == 0) 	{ a[s.y][s.x+1] = *t; return 0;}
	else return 1;
}

int main(){
	matrix a;
	int m,n,i;
	back:;
	printf("Nhap kich thuoc ma tran:\n");
	printf("m = "); scanf("%d",&m);
	printf("n = "); scanf("%d",&n);
	if ((m<3)||(n<3)) {printf("Vui long nhap kich thuoc lon hon 2!\n"); goto back;}
	
	int x=n-1, y=m-1, temp=1, p=0;

// chay ma tran xoan toi luc gan xong	
	while ((x>p) && (y>p)){
		for (i=p; i<=x; i++) {
			a[p][i] = temp; temp++;
		}
	
		for (i=p+1; i<=y; i++) {
			a[i][x] = temp; temp++;
		}
		
		for (i=x-1; i>=p; i--) {
			a[y][i] = temp; temp++;
		}
		
		for (i=y-1; i>p; i--) {
			a[i][p] = temp; temp++;
		}
	p++; x--; y-- ;
	}

// dien phan con thieu
	int check;
	do { check = fill(a,m,n,&temp); temp++;} while (check!=1); 
	prm(a, m, n);

	return 0;
}
