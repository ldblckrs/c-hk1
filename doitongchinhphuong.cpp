#include<stdio.h>
#include<math.h>
int lietke(int n){
	if(n==1)return 1;
	if(n==0)return 0;
	int i;
	i=sqrt(n);
	return i*i;
	}
void tim(int n){
	int a[100000];
	a[0]=n-lietke(n);
	int j,i=1;
	printf("%d=%0.0f^2",n,sqrt(lietke(n)));
	while(1){
		a[i]=a[i-1]-lietke(a[i-1]);
		if(lietke(a[i-1])==0)break;
		printf("+%0.0f^2",sqrt(lietke(a[i-1])));
		i++;
		}
	}
int main(){
	int n;
	scanf("%d",&n);
	tim(n);
	return 0;
	}
		
	
