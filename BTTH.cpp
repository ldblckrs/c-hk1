#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

							/* ********************* Bai 1 
int main()
{
	int n;
	scanf("%d",&n);
	printf("%c",(char)n);
	return 0;
}
							************************** */

							
struct Thoigian{
	int gio;
	int phut;
	int giay;
};
typedef struct Thoigian time;
							/* ********************* Bai 2
int main()
{
	time a,b;
	int n,t,check =1;
	printf("Nhap Gio (24h) :");   scanf("%d",&a.gio);	if ((a.gio)<0 || (a.gio)>=24) check=0;
	printf("Nhap Phut :");   scanf("%d",&a.phut);		if ((a.phut)<0 || (a.phut)>=60) check=0;
	printf("Nhap Giay :");   scanf("%d",&a.giay);		if ((a.giay)<0 || (a.giay)>=60) check=0;
	if (!check) { printf("NHAP THOI GIAN KHONG HOP LE !"); goto ketthuc;}
	printf("Tinh thoi gian sau so giay :");   scanf("%d",&n);
	
	t = (a.gio*60*60) + (a.phut*60) + (a.giay);
	t += n;
	while (t>= 86400) t -= 86400;
	b.gio = t/(60*60);
	b.phut = (t%(60*60))/60;
	b.giay =  (t%(60*60))%60;
	
	printf("Sau %d giay thi luc nay thoi gian la: %d gio %d phut %d giay.", n, b.gio, b.phut, b.giay);
	ketthuc:;
}
							************************ */

							/* ********************  Bai 4
int main(){
	float x,y;
	scanf("%f",&x);
	y = (log((pow(x,4)+1)) + pow(x,5) + pow(x*x,(1.0/3))) / (pow(x,2)+(M_PI/4)); 
	printf("%.4f",y);
}
							************************  */
							
int main(){
	char ch;
	start:;
	scanf("%c",&ch);
	if ( (ch<65) || (ch>122) || ( (ch>90) && (ch<97) ) ) { printf("Vui long nhap chu cai thuong hoac in hoa !\n"); goto start;}
	else if ((ch<91)) ch += 32;
	else ch -= 32;
	printf("%c",ch);
	return 0;
}
		
