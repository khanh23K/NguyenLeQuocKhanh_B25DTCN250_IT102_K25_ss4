#include <stdio.h>
int main(){
	printf("nhap thang trong nam: ");
	int n;
	scanf("%d",&n);
	switch(n){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("co 31 ngay");
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		printf(" co 30 ngay");
		break;
		case 2:
			printf("28-29 ngay");
		default:
			printf("thang ko hop le:");
	}
}
