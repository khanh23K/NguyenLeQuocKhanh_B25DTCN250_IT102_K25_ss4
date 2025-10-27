#include <stdio.h>
int main(){
	printf("nhap nam: ");
	int n;
	scanf("%d",&n);
	if ((n % 4==0 && n %100 !=0 )||(n %100 == 0)){
		printf ("nam da nhap la nam nhuan");
	}else {
		printf ("nam da nhap ko phai la nam nhuan");
	}
	return 0;
}

