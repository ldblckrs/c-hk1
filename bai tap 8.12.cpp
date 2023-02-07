#include <stdio.h>

main(){
	char ch;
	printf("Nhap 1 chu so trong he thap luc phan : ");
	scanf("%c",&ch);
	if ( (ch>=48) && (ch<=57) ) printf("Co so 10:%c",ch);
	else if ( (ch>=65) && (ch<=70) ) printf("Co so 10: 1%c",ch-=17);
	else printf("Du lieu nhap khong hop le.");	
}
