#include <stdio.h>
#include <math.h>

int tohop(int i, int j){
	if ((i==0) || (i==j)) return 1;
	return tohop(i-1,j-1) + tohop(i,j-1); 
}

int main(){
	int i,j;
	printf("i = "); scanf("%d",&i);
	printf("j = "); scanf("%d",&j);
	if (i>j) printf("Khong co ket qua");
	 else printf("%d",tohop(i,j));
}


