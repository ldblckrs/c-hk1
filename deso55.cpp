#include <stdio.h>
#include <math.h>

typedef int kq[100];
int check1(int X, int Y){
	int xb, xt, yb, yt;
	xb = X/100; xt = X%10; 
	yb = Y/1000; yt = (Y%100 - Y%10)/10;
	//lay xb = yb = B, xt = yt = T
	if ((xb==yb)&&(xt==yt)) return 1; 
	else return 0; 
}

int check2(int X, int Y){
	int i, y, e;
	int b, t;
	b = X/100; t = X%10;
	i = (X%100 - X%10)/10;
	y = (Y%1000 - Y%100)/100;
	e = Y%10;
//	printf("%d %d %d, %d %d ",b,i,t,y,e);
	if ((i==y) || (i==e) || (i==b) || (i == t)
		|| (y==e) || (y==b) || (y==t)
		|| (e==b) || (e==t) || (b==t)) 
		return 0;
	return 1;
}

int check0(int X, int Y){
	if (check1(X,Y)) {
		if (check2(X,Y)) return 1;
		}
	return 0;
}


int main(){
	int x;
	for (x = 100; x<1000; x++) {
		if (check0(x,x*8)) printf ("%d * 8 = %d\n",x,x*8);
	}


}
