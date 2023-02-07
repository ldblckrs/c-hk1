#include <stdio.h>
#include <string.h>

typedef char str[1000];

int input(str a){
	gets(a); int i;
	for (i=2; i<1000; i++) 
		if (a[i] == NULL) return i;
	return -1;
}

int check(str a){
	int n,i;
	n = input(a);
	if (n==-1) return -1;
		else {
			for (i=0; i<(n/2) ; i++){
				if (a[i]!=a[n-1-i]) return 0;}
			return 1;
			}	
	}
	
int main(){
	str a; int c;
	c = check(a);
	if (c==1) printf("Chuoi doi xung");
	else if (c==0) printf("Chuoi khong doi xung");
	else ("Chuoi bi loi");
	}

