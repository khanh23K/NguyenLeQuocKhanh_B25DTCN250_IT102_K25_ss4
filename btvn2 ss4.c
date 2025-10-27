#include <stdio.h>
int main(){
	printf("nhap vao 1 so bat ki:");
	int n;
	scanf("%d",&n);
	if(n % 2==0){
		printf("so vua nhap la so chan");
	}else {
		printf("so vua nhap la so le");
	}
	return 0;
}

